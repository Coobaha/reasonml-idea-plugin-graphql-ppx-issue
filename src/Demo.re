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

module Test2 = [%graphql
  {|
  query testQuery($id: ID!) {
     user {
        name
      }
      allUsers {
        id
      }
  }
  |}
];
