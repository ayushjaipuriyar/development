import { makeStyles, Paper } from "@material-ui/core";
import PeopleOutlineIcon from "@material-ui/icons/PeopleOutline";
import React from "react";

import PageHeader from "../../Components/PageHeader";

import EmployeesForm from "./EmployeesForm";
const useStyles = makeStyles({
  pageContent: { margin: "40px", padding: "24px" },
});

const Employees = () => {
  const classes = useStyles();
  return (
    <React.Fragment>
      <PageHeader
        title="New Employee"
        subtitle="Form design with validation"
        icon={<PeopleOutlineIcon fontSize="large" />}
      />
      <Paper className={classes.pageContent}>
        <EmployeesForm />
      </Paper>
    </React.Fragment>
  );
};

export default Employees;
