app.controller('myCtrl', function($scope) {
    $scope.showHell = false;
    $scope.showEditWindow = false;
    $scope.myarr = [{
        name: 'Star',
        date: '12.01.2016',
        time: '12:01',
        money: '5000',
        note: 'empty'
    }, {
        name: 'City',
        date: '03.05.2015',
        time: '12:17',
        money: '450',
        note: 'empty'
    }, {
        name: 'Mars',
        date: '15.07.2016',
        time: '11:45',
        money: '3000',
        note: 'empty'
    }, {
        name: 'Neptun',
        date: '12.01.2016',
        time: '12:45',
        money: '5000',
        note: 'empty'
    }, {
        name: 'Moon',
        date: '11.06.2016',
        time: '10:20',
        money: '120',
        note: 'empty'
    }, ]



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
    function addRow() {
        var scrollTop = window.pageYOffset || document.documentElement.scrollTop;
        if (scrollTop > 0) {
            scrollTop = (window.screen.height / 2) - 300 + (scrollTop / 16);
        } else {
            scrollTop = (window.screen.height / 2) - 300;
        }
        document.getElementById("editWindow").style.top = (scrollTop) + "px";
        document.getElementById("editWindow").style.display = "block";

    }
    // hides edit div after canceling or saveing
    $scope.hideDiv = function() {
            $scope.showHell = false;
            $scope.showEditWindow = false;
        }
        // edits the row
    $scope.editRow = function(i) {
        addRow();

        $scope.marketM = i.name;
        $scope.dateM = i.date;
        $scope.timeM = i.time;
        $scope.moneyM = i.money;
        $scope.noteM = i.note;

        $scope.showHell = true;
        $scope.showEditWindow = true;

    }




});
