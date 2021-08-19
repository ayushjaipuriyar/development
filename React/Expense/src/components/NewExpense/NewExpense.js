import React, { useState } from 'react';

import ExpenseForm from './ExpenseForm';
import './NewExpense.css';

const NewExpense = (props) => {
	const [isEditing, setIsEditing] = useState(false);

	const onSaveExpenseDataHandler = (enteredExpenseData) => {
		const expenseData = {
			...enteredExpenseData,
			id: Math.random().toString(),
		};
		props.onAddExpense(expenseData);
		setIsEditing(false);
	};

	const startEditinghandler = () => {
		setIsEditing(true);
	};
	const stopEditinghandler = () => {
		setIsEditing(false);
	};
	return (
		<div className='new-expense'>
			{!isEditing && (
				<button onClick={startEditinghandler}>Add New Expense</button>
			)}
			{isEditing && (
				<ExpenseForm
					onSaveExpenseData={onSaveExpenseDataHandler}
					onCancel={stopEditinghandler}
				/>
			)}
		</div>
	);
};

export default NewExpense;
