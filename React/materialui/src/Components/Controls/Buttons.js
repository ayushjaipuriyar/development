import { Button as MuiButton, makeStyles } from "@material-ui/core";
import React from "react";

const useStyles = makeStyles({
  root: { margin: "4px" },
  label: { textTransform: "none" },
});
const Buttons = (props) => {
  const { text, size, color, variant, onClick, ...other } = props;
  const classes = useStyles();
  return (
    <MuiButton
      variant={variant || "contained"}
      size={size || "large"}
      color={color || "primary"}
      onClick={onClick}
      {...other}
      className={{ root: classes.root, label: classes.label }}
    >
      {text}
    </MuiButton>
  );
};
export default Buttons;
