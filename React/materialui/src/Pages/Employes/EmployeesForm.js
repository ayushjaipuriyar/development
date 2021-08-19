import { Grid } from "@material-ui/core";
import React from "react";

import Buttons from "../../Components/Controls/Buttons";
import CheckBox from "../../Components/Controls/CheckBox";
import DatePicker from "../../Components/Controls/DatePicker";
import DropDown from "../../Components/Controls/DropDown";
import Input from "../../Components/Controls/input";
import RadioGroupWrapper from "../../Components/Controls/radioGroup";
import { Form, useForm } from "../../Components/useForm";
import * as employeeService from "../../Services/employeesService";

const genderItems = [
  { id: "male", title: "Male" },
  { id: "female", title: "Female" },
  { id: "other", title: "Other" },
];

const initialValues = {
  id: 0,
  fullName: "",
  email: "",
  mobile: "",
  city: "",
  gender: "male",
  departmentId: "",
  hireDate: new Date(),
  isPermanent: false,
};

const EmployeesForm = () => {
  const validate = (fieldValues = values) => {
    let temp = { ...errors };
    if ("fullName" in fieldValues)
      temp.fullName = fieldValues.fullName ? "" : "This field is required";
    if ("email" in fieldValues)
      temp.email = /$^|.+@.+..+/.test(fieldValues.email)
        ? ""
        : "Email is not valid";
    if ("mobile" in fieldValues)
      temp.mobile =
        fieldValues.mobile.length > 9 ? "" : "Minimum 10 numbers are required";
    if ("departmentId" in fieldValues)
      temp.departmentId =
        fieldValues.departmentId.length !== 0 ? "" : "This field is required";
    setErrors({ ...temp });
    if (fieldValues === values)
      return Object.values(temp).every((x) => x === "");
  };
  const {
    values,
    setValues,
    errors,
    setErrors,
    inputChangeHandler,
    resetForm,
  } = useForm(initialValues, true, validate);

  const handleSubmit = (e) => {
    e.preventDefault();
    if (validate()) {
      employeeService.insertEmployee(values);
      resetForm();
    }
  };
  return (
    <Form onSubmit={handleSubmit}>
      <Grid container>
        <Grid item xs={6}>
          <Input
            label="Full Name"
            name="fullName"
            value={values.fullName}
            onChange={inputChangeHandler}
            error={errors.fullName}
          />
          <Input
            label="E-mail"
            name="email"
            value={values.email}
            onChange={inputChangeHandler}
            error={errors.email}
          />
          <Input
            label="Mobile"
            name="mobile"
            value={values.mobile}
            onChange={inputChangeHandler}
            error={errors.mobile}
          />
          <Input
            label="City"
            name="city"
            value={values.city}
            onChange={inputChangeHandler}
          />
        </Grid>
        <Grid item xs={6}>
          <RadioGroupWrapper
            name="gender"
            label="Gender"
            value={values.gender}
            onChange={inputChangeHandler}
            items={genderItems}
          />

          <DropDown
            name="departmentId"
            label="Department"
            value={values.departmentId}
            onChange={inputChangeHandler}
            options={employeeService.getDepartmentCollection()}
            error={errors.departmentId}
          />
          <DatePicker
            name="hireDate"
            label="Date"
            value={values.hireDate}
            onChange={inputChangeHandler}
          />
          <CheckBox
            name="isPermanent"
            label="Permanent Employee"
            value={values.isPermanent}
            onChange={inputChangeHandler}
          />
          <div>
            <Buttons text="submit" type="submit" />
            <Buttons text="Reset" color="default" onClick={resetForm} />
          </div>
        </Grid>
      </Grid>
    </Form>
  );
};
export default EmployeesForm;
