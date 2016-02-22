var regButton = document.getElementById('SignUp');
regButton.onclick = function () {
		  var fso = new ActiveXObject("Scripting.FileSystemObject");
		  var check = fso.FileExists("usersData.txt"); // true, if file exists
		  
  		  alert("Check: function is called");

		  // check if file exists open file, if doesn't exist create userData.txt file and write email and password for user
		  if (check) {
					 alert("File exists");
					 var dataFile = fso.OpenTextFile("./usersData.txt", 3);
		  }
		  else {
					 alert("File doesn't exist");
					 var dataFile = fso.CreateTextFile("./userData.txt", true);
		  }
		  dataFile.WriteLine(getElementById("email").value + " "+getElementById("password").value);
		  dataFile.Close();
}
