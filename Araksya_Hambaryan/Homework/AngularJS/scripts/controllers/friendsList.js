appEasyBoard.controller("friendsList", function($scope) {
$scope.tabs = ["Friends", "Chats"];
$scope.data = 

[{
   image : "../resources/images.jpg",
   name : "Anna Meliqyan", 
   google :true,
   facebook : true
}, {
   image : "../resources/ArenAren.jpg",
   name : "Aren Aren", 
   google :false,
   facebook : true
}, {
   image : "../resources/Ashot.jpg",
   name : "Ashot Avetyan", 
   google :false,
   facebook : true
}, {
   image : "../resources/Mariam.jpg",
   name : "Mariam Avetyan", 
   google :true,
   facebook : false
}];

})
