import React from 'react' 

import MealsSummary from "./MealsSummary";
import AvailabeMeals from "./AvailableMeals";

const Meals = () => {
  return (
    <React.Fragment>
    <MealsSummary />
    <AvailabeMeals />
    </React.Fragment>
  )
};
export default Meals;
