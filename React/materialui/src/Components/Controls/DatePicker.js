import DateFnsUtils from "@date-io/date-fns";
import {
  KeyboardDatePicker,
  MuiPickersUtilsProvider,
} from "@material-ui/pickers";
import React from "react";

const DatePicker = (props) => {
  const { name, label, value, onChange } = props;

  const converttoDefEventPara = (name, value) => ({ target: { name, value } });

  return (
    <MuiPickersUtilsProvider utils={DateFnsUtils}>
      <KeyboardDatePicker
        disableToolbar
        variant="inlined"
        inputVariant="outlined"
        format="d MMMM yyy"
        label={label}
        name={name}
        value={value}
        onChange={(date) => onChange(converttoDefEventPara(name, date))}
      />
    </MuiPickersUtilsProvider>
  );
};

export default DatePicker;
