import { Card, makeStyles, Paper, Typography } from "@material-ui/core";
import React from "react";

const useStyles = makeStyles({
  root: { background: "#fdfdff" },
  pageHeader: { padding: "32px", display: "flex", marginBottom: "24px" },
  pageIcon: {
    display: "inline-block",
    padding: "24px",
    color: "#3c44b1",
  },
  pageTitle: {
    paddingLeft: "32px",
    "& .MuiTypography-subtitle2": {
      opacity: "0.6",
    },
  },
});

export default function PageHeader(props) {
  const classes = useStyles();
  const { title, subtitle, icon } = props;
  return (
    <Paper elevation={0} square className={classes.root}>
      <div className={classes.pageHeader}>
        <Card className={classes.pageIcon}>{icon}</Card>
        <div className={classes.pageTitle}>
          <Typography variant="h6" component="div">
            {title}
          </Typography>

          <Typography variant="subtitle2" component="div">
            {subtitle}
          </Typography>
        </div>
      </div>
    </Paper>
  );
}
