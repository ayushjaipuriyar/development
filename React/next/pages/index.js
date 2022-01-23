import MeetupList from "../components/meetups/MeetupList";

const DUMMY_MEETUPS = [
  {
    id:'m1',
  title:'A First Meetup',
  image: 'https://picsum.photos/200/300',
  address: 'some addferefef',
  description: 'First meetup'
  },{
  id:'m1',
  title:'A First Meetup',
  image: 'https://picsum.photos/200/300',
  address: 'some addferefef',
  description: 'First meetup'

  }
]

function HomePage() {
  return <MeetupList meetups={DUMMY_MEETUPS} />
  
}
export default HomePage;
