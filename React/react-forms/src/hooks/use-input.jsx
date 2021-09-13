import { useState } from "react";

const useInput = (validateValue) => {
  const [enteredValue, setEnteredValue] = useState("");
  const [isTouched, setIsTouched] = useState(false);
  const valueIsValid = validateValue(enteredValue);
  const hasError = !valueIsValid && isTouched;
  const valueChangeHandler = (event) => {
    setEnteredValue(event.target.value);
  };
  const inputBlurHandler = (event) => {
    setIsTouched(true);
  };
  const reset = () => {
    setIsTouched(false);
    setEnteredValue("");
  };

  return {
    value: enteredValue,
    IsValid: valueIsValid,
    hasError: hasError,
    valueChangeHandler,
    inputBlurHandler,
    reset,
  };
};
export default useInput;
