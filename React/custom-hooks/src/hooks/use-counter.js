import { useState, useEffect } from "react";

const useCounter = (forwads = true) => {
  const [counter, setCounter] = useState(0);
  useEffect(() => {
    const interval = setInterval(() => {
      if (forwads) {
        setCounter((prevCounter) => prevCounter + 1);
      } else {
        setCounter((prevCounter) => prevCounter - 1);
      }
    }, 1000);
    return () => clearInterval(interval);
  }, [forwads]);
  return counter;
};

export default useCounter;
