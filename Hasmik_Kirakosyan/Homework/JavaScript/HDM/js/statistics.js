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
	{date:"03/25/2015",market:"Sparapet", product:"bread", price:"500"},
	{date:"05/17/2012",market:"Arevik",   product:"cake",  price:"1800"}, 
	{date:"01/5/2005" ,market:"GrinPlaza",product:"soap",  price:"3645"},
	{date:"09/13/2015",market:"Voskya",  product:"hat",    price:"8500"},
	{date:"06/25/2015",market:"Vega",    product:"wash-machine", price:"4530"},
	{date:"11/18/2015",market:"Proshyan",product:"wine",   price:"50050"},    
	{date:"01/05/2015",market:"Evrika",  product:"coffee", price:"50350"},
	{date:"12/13/2015",market:"Smayl",   product:"sweets", price:"2500"}
];

for (var i=0; i < 4; i++) {
		  var th = document.createElement("th");
		  var t;
		  switch (i) {
					 case 0:  t=document.createTextNode("Date");
								 break;
					 case 1:  t=document.createTextNode("Market");
								 break;
					 case 2:  t=document.createTextNode("Product");
								 break;
					 case 3:  t=document.createTextNode("Price");
								 break;
					 default:break;

		  }

		  th.appendChild(t);
		  tbdy.appendChild(th);
		  table.appendChild(tbdy);

}


function printArr()  {
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

/*function sortByDate() {
  Datas.sort(dynamicSort(["date","01/5/2005"], ["date","03/25/2015"] );
  printArr();   
}*/


