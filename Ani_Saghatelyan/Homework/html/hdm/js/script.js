function showDiv(divId) {

    document.getElementById("forgotPassDiv").style.display = "none";
    document.getElementById("signInDiv").style.display = "none";
    document.getElementById("signUpDiv").style.display = "none";

    if (typeof divId === 'undefined') {
        divId = location.href.match('[?]..(.+?)$');
        if (divId) {
            divId = divId[1];
        }
    }

    if (!divId) {
        divId = 'signInDiv';
    }

    switch (divId) {
        case 'signUpDiv':
            document.title = "Create account";
            break;
        case 'forgotPassDiv':
            document.title = "Forgot password";
            break;
        default:
            document.title = "Sign In to HDM";
            divId = 'signInDiv';
            if (signIn()) {
                return;
            }

    }
    document.getElementById(divId).style.display = "block";
}



function signIn() {

    var email = location.href.match('email=(.+?)&');
    var pass = location.href.match('password=(.+?)#');


    if (email && pass) {
        if (email[1] == "Janoyan" && pass[1] == "student") {
            location.href = 'index.html';
            return 1;
        }
    }

    return 0;

}
/*Database structure */
function DatabaseItem(name, date, money, item) {
    this.name = name;
    this.date = date;
    this.money = money;
    this.item="";
    this.getArray = function() {
        var arr = [this.name, this.date.toLocaleDateString(), this.date.toLocaleTimeString(), this.money];
        return arr;
    }
}

function Database() {
    this.item = []
    this.count = 0;


    /*adding new item*/
    this.addItem = function(name, date, money) {
        this.item[this.count++] = new DatabaseItem(name, date, money);
    }

    /*sort array by Date*/
    this.sortByDate = function() {

            this.item.sort(function(a, b) {
                return a.date.getTime() - b.date.getTime();
            });

        }
        /*sort array by Price*/
    this.sortByPrice = function() {

        this.item.sort(function(a, b) {
            return a.money - b.money;
        });

    }

    /*sort array by Market*/
    this.sortByMarket = function() {

        this.item.sort(function(a, b) {
            return (a.name > b.name) ? 1 : -1
        });

    }

    /*Union repeated days*/
    this.unionDays = function() {

        var result = new Database();

        for (i = 1; i < this.count; ++i) {
            tmpDate = this.item[i - 1].date;
            tmpMoney = this.item[i - 1].money;
            tmpName = this.item[i - 1].name;

            while (this.item[i].date == tmpDate && i < this.count) {
                tmpMoney += this.item[i].money;
                tmpName = tmpName + ' & ' + this.item[i].name;
                ++i;
            }
            result.addItem(tmpName, tmpDate, tmpMoney);
        }
        return result;
    }


}


/*Ani SAghatelyan*/
/* statistic page Table*/

var myDb = new Database();

myDb.addItem("Smile", new Date(2016, 2, 23, 14, 14), 2000);
myDb.addItem("jye", new Date(2016, 1, 2, 23, 32), 1000);
myDb.addItem("jumper", new Date(2016, 4, 7, 12, 50), 2010);
myDb.addItem("cssile", new Date(2016, 4, 21, 12, 32), 5700);
myDb.addItem("gfle", new Date(2016, 7, 4, 4, 45), 4110);
myDb.addItem("Sdc", new Date(2016, 8, 1, 12, 10), 2200);
myDb.addItem("Smile", new Date(2016, 8, 23, 10, 30), 6100);
myDb.addItem("jan", new Date(2016, 2, 1, 10, 41), 5000);
myDb.addItem("Smile", new Date(2016, 2, 9, 15, 00), 3000);
myDb.addItem("Star", new Date(2016, 3, 8, 22, 20), 1500);

/*date converting into format Date*/

/**function count, which shows 3 rows on every click 'more' button*/

var count = (function() {
    var num = 0;
    return function() {
        var first = num;
        num += 3;
        for (var i = first; i < num + 3 && i <= myDb.count; ++i) {
            document.getElementById("myTable").rows[i].style.display = "table-row";
        }
    }
})()

/**function, which hides all rows beside first three rows*/
var hideOtherRows = function(number) {
    for (var i = number; i <= myDb.count; ++i) {
        document.getElementById("myTable").rows[i].style.display = "none";
    }
}

/*adds row for new input*/
function addRow()	
{
	document.getElementById("myTable").style.opacity="0.25";
	document.getElementById("editWindow").style.display="block";
}


function table() 
{
    document.getElementById("editWindow").style.display="none";	
    var myTable = document.getElementById("myTable");
    myTable.setAttribute("style", "width:50% ; margin:5% 10% 0%; padding:0%;");
    var header = myTable.createTHead();
    var headerRow = header.insertRow(0);
     Head = ["Market", "Date", "Time", "Price", "Item"];
    for (var i = 0; i < Head.length; ++i) 
    {
        var dataDate = headerRow.insertCell(i);
        dataDate.innerHTML = Head[i];
        dataDate.setAttribute("style", "font-weight: bold;");

    }		
	                		
 	
			
    for (var i = 0; i < myDb.count; i++) 
    {
        tmp = myDb.item[i].getArray();
        var row = document.createElement("tr");
        for (s in tmp) 
	{
	
            var cell = document.createElement("td");
            var cellText = document.createTextNode(tmp[s]);
            cell.appendChild(cellText);
            row.appendChild(cell);
        }
    }
	 
     

    myTable.setAttribute("border", "2");
    hideOtherRows(3);
}
/*function, which filters using dates*/
function Filter() 
{

    var fromDate=new Date(document.getElementById("firstDate").value);

    var toDate=new Date(document.getElementById("secondDate").value);
		
    hideOtherRows(1);

    for (var i = 0; i < myDb.count; ++i) 
    {

	    tmpTime=myDb.item[i].date.value;

   	    

        	if (tmpTime >= fromDate && tmpTime <=toDate) 
		{
			alert(tmpTime+' | '+fromDate+' | '+toDate)
            		document.getElementById("myTable").rows[i+1].style.display = "table-row";

                }	

     }



}



/* Usage page*/
/* function for progress usage page*/
function progressSteps(idProgress, idCircle, idStep) {

    document.getElementById("thirdStep").style.display = "none";
    document.getElementById("secondStep").style.display = "none";
    document.getElementById("firstStep").style.display = "none";

    document.getElementById(idStep).style.display = "block";


    document.getElementById("thirdCircle").style.background = "linear-gradient(to top, #0094F7, #007acc)";
    document.getElementById("secondCircle").style.background = "linear-gradient(to top, #0094F7, #007acc)";
    document.getElementById("firstCircle").style.background = "linear-gradient(to top, #0094F7, #007acc)";
    document.getElementById(idCircle).style.background = "#999999";

    document.getElementById("thirdProgress").style.background = "#bfbfbf";
    document.getElementById("secondProgress").style.background = "#bfbfbf";
    document.getElementById("firstProgress").style.background = "#bfbfbf";

    switch (idProgress) {
        case 'thirdProgress':
            document.getElementById("thirdProgress").style.background = "#007acc";
        case 'secondProgress':
            document.getElementById("secondProgress").style.background = "#007acc";
        case 'firstProgress':
            document.getElementById("firstProgress").style.background = "#007acc";
    }

}
