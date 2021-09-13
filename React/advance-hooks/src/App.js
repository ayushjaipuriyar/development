import React, { useEffect, useState, useCallback } from "react";

import NewTask from "./components/NewTask/NewTask";
import Tasks from "./components/Tasks/Tasks";
import useHttp from "./hooks/use-https";

function App() {
  const [tasks, setTasks] = useState([]);
  const transfromTasks = useCallback((taskObj) => {
    const loadedTasks = [];

    for (const taskKey in taskObj) {
      loadedTasks.push({ id: taskKey, text: taskObj[taskKey].text });
    }

    setTasks(loadedTasks);
  }, []);
  const { isLoading, error, sendRequest: fetchTasks } = useHttp(transfromTasks);
  useEffect(() => {
    fetchTasks({
      url: "https://react-91786-default-rtdb.firebaseio.com/tasks.json",
    });
  }, [fetchTasks]);

  const taskAddHandler = (task) => {
    setTasks((prevTasks) => prevTasks.concat(task));
  };

  return (
    <React.Fragment>
      <NewTask onAddTask={taskAddHandler} />
      <Tasks
        items={tasks}
        loading={isLoading}
        error={error}
        onFetch={fetchTasks}
      />
    </React.Fragment>
  );
}

export default App;
