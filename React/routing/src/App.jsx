import { BrowserRouter, Route, Switch } from "react-router-dom";
function App() {
  return (
    <BrowserRouter>
      <Switch>
        <Route path="/quotes"></Route>
        <Route path="/quotes/:quoteId"></Route>
        <Route path="/newQuotes"></Route>
      </Switch>
    </BrowserRouter>
  );
}

export default App;
