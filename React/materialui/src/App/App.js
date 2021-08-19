import "./App.css";

import { CssBaseline, makeStyles } from "@material-ui/core";
import React from "react";

import Header from "../Components/Header";
import SideMenu from "../Components/SideMenu";
import Employees from "../Pages/Employes/Employees";

const useStyles = makeStyles({
  appMain: {
    paddingLeft: "320px",
    width: "100%",
  },
});

function App() {
  const classes = useStyles();
  return (
    <React.Fragment>
      <SideMenu />
      <div className={classes.appMain}>
        <Header />
        <Employees />
      </div>
      <CssBaseline />
    </React.Fragment>
  );
}

export default App;
