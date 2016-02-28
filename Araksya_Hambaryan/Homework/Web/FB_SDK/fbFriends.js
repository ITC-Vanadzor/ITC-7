var json=[
{
    "name": "Ani Meliqyan",
	"profile_picture": "https://raw.githubusercontent.com/ITC-Vanadzor/ITC-7/master/Araksya_Hambaryan/Homework/Web/Resources/images.jpg"
},
{
    "name": "Aren Aren",
    "profile_picture": "https://raw.githubusercontent.com/ITC-Vanadzor/ITC-7/master/Araksya_Hambaryan/Homework/Web/Resources/ArenAren.jpg"
},
{
    "name": "Ashot Avetyan",
    "profile_picture": "https://raw.githubusercontent.com/ITC-Vanadzor/ITC-7/master/Araksya_Hambaryan/Homework/Web/Resources/Ashot.jpg"
},
{
    "name": "Mariam Avetyan",
    "profile_picture": "https://raw.githubusercontent.com/ITC-Vanadzor/ITC-7/master/Araksya_Hambaryan/Homework/Web/Resources/Mariam.jpg"
},
{
    "name": "Sargis Sargsyan",
    "profile_picture": "https://raw.githubusercontent.com/ITC-Vanadzor/ITC-7/master/Araksya_Hambaryan/Homework/Web/Resources/Sargis.jpg"
}
]

function loadFriendsList() {
    var results = '';
    var list=document.getElementById("friendsList");
    for (var i = 0; i < json.length; i++) {
	results += '<div><img class="AnnaImage" src="' +json[i].profile_picture + '">'+ '<h2>'+json[i].name + '</h2></div>';
	     
	list.innerHTML=results;
     }
}


