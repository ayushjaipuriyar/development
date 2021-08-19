import React, { useState } from 'react';

import Expenses from './components/Expenses/Expenses';
import NewExpense from './components/NewExpense/NewExpense';

const DUMMY_EXPENSES = [
	{
		id: 'e1',
		title: 'Toilet Paper',
		amount: 94.12,
		date: new Date(2021, 5, 16),
	},
	{
		id: 'e2',
		title: 'New Desk',
		amount: 49.59,
		date: new Date(2021, 5, 16),
	},
	{
		id: 'e3',
		title: 'TV',
		amount: 799.99,
		date: new Date(2021, 5, 16),
	},
	{
		id: 'e4',
		title: 'Car Insurance',
		amount: 294.67,
		date: new Date(2021, 5, 16),
	},
];

const App = () => {
	const [expenses, setExpenses] = useState(DUMMY_EXPENSES);

	const addExpenseHandler = (expense) => {
		setExpenses((prevExpenses) => {
			return [expense, ...prevExpenses];
		});
	};
	return (
		<div>
			<NewExpense onAddExpense={addExpenseHandler} />
			<Expenses items={expenses}></Expenses>
		</div>
	);
};

export default App;
