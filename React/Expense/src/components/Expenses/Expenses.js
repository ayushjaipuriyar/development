import React, { useState } from 'react';

import Card from '../UI/Card';
import ExpensesChart from './ExensesChart';
import ExpenseFilter from './ExpenseFilter';
import './Expenses.css';
import ExpensesList from './ExpensesList';

const Expenses = (props) => {
	const [filteredYear, setFilteredYear] = useState('2021');
	console.log(props.items);
	const filterChangedHandler = (selectedYear) => {
		setFilteredYear(selectedYear);
	};

	const filteredExpenses = props.items.filter((expense) => {
		return expense.date.getFullYear().toString() === filteredYear;
	});

	return (
		<div>
			<Card className='expenses'>
				<ExpenseFilter
					selected={filteredYear}
					onChangeFilter={filterChangedHandler}
				/>
				<ExpensesChart expenses={filteredExpenses} />
				<ExpensesList items={filteredExpenses} />
			</Card>
		</div>
	);
};

export default Expenses;
