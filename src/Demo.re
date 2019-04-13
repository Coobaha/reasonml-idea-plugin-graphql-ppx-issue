module Test = [%graphql {|
{
  user {
    name
  }
  allUsers {
    id
  }
}
 |}];
