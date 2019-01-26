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
  query testQuery($skip: Boolean!) {
     user {
        name
      }
      allUsers(skip: $skip) {
        id
      }
  }
  |}
];

let parse = Test.parse;
let parse2 = Test2.parse;
