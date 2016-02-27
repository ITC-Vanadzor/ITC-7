// ************ Create Table ***************************

var table = document.createElement("table");
table.setAttribute("id", "urlTable");
//table.setAttribute("border", "1pxi");
var tZone = document.getElementById("tableZone");
tZone.appendChild(table);

document.getElementById("urlTable").style.color = "blue";
document.getElementById("urlTable").style.margin = "auto";

var tbdy = document.createElement('tbody');
var tr = document.createElement('tr');


// *********** Custom Data objects array*****************
var Datas=[
	{date:"2015-25-03",market:"Sparapet", product:"bread", price:"500"},
	{date:"2012-17-05",market:"Arevik",   product:"cake",  price:"1800"}, 
	{date:"2005-05-01" ,market:"GrinPlaza",product:"soap",  price:"3645"},
	{date:"2015-13-09",market:"Voskya",  product:"hat",    price:"8500"},
	{date:"2015-25-06",market:"Vega",    product:"wash-machine", price:"4530"},
	{date:"2015-18-11",market:"Proshyan",product:"wine",   price:"50050"},    
	{date:"2015-05-01",market:"Evrika",  product:"coffee", price:"50350"},
	{date:"2015-13-12",market:"Smayl",   product:"sweets", price:"2500"}
];

var fields=["Date", "Market", "Product", "Price"];
for (field in fields) {
		  var th = document.createElement("th");
		  var t=document.createTextNode(fields[field]);

		  th.appendChild(t);
		  tbdy.appendChild(th);
		  table.appendChild(tbdy);
}


// Get array of values of any property in Datas object array
function getFields(input, field) {
		      var output = [];
				    for (var i=0; i < input.length ; ++i)
								        output.push(input[i][field]);
					     return output;
}


// print ani array
function printArr(Datas)  {
		  for (obj in Datas) {
		  var tr = document.createElement('tr');
				 for( key in Datas[obj]) {
					 var td = document.createElement('td');
					 var productObj = Datas[obj];
	
					 switch (key) {

								case "date": td.appendChild(document.createTextNode(productObj[key]));
										  break;
								case "market": td.appendChild(document.createTextNode(productObj[key]));
										  break;
								case "product": td.appendChild(document.createTextNode(productObj[key]));
										  break;
								case "price": td.appendChild(document.createTextNode(productObj[key]));
										  break;
								default:break;
					 }
					 tr.appendChild(td);

		  }
		  		    tbdy.appendChild(tr);
		          table.appendChild(tbdy);
	}
}

printArr(Datas);


// Sort by date
function sortByDate() {
   for (i=0; i<Datas.length; i++) {
		document.getElementById("urlTable").deleteRow(0);
	}
   var dateArr = getFields(Datas, "date");
	dateArr.sort();
	
	var newDatas = [];	
	var i = 0;
	for (dt in dateArr) 
			  for (obj in Datas) {
						 if (dateArr[dt] == Datas[obj].date) {
									newDatas[i] = Datas[obj];
									i++;
						 }
	}
	printArr(newDatas);
}

sortByDate();


// Sort by market

function sortByMarket() {

 for (i=0; i<Datas.length; i++) {
		document.getElementById("urlTable").deleteRow(0);
	}
   var marketArr = getFields(Datas, "market");
	marketArr.sort();
	
	var newDatas = [];	
	var i = 0;
	for (dt in marketArr) 
			  for (obj in Datas) {
						 if (marketArr[dt] == Datas[obj].market) {
									newDatas[i] = Datas[obj];
									i++;
						 }
	}
	printArr(newDatas);

}
   
//sortByMarket();

