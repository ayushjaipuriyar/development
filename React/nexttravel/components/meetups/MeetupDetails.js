import React, { Fragment } from 'react';

function MeetupDetails(props) {
	return (
		<Fragment>
			<img src='' alt=''></img>
			<h1>{props.tittle}</h1>
			<address>{props.address}</address>
			<p>{props.description}</p>
		</Fragment>
	);
}

export default MeetupDetails;
