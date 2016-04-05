-- MySQL dump 10.13  Distrib 5.5.47, for debian-linux-gnu (x86_64)
--
-- Host: localhost    Database: Students
-- ------------------------------------------------------
-- Server version	5.5.47-0ubuntu0.14.04.1

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Temporary table structure for view `AVG_EACH_STUDENT_PER_SUBJECT`
--

DROP TABLE IF EXISTS `AVG_EACH_STUDENT_PER_SUBJECT`;
/*!50001 DROP VIEW IF EXISTS `AVG_EACH_STUDENT_PER_SUBJECT`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `AVG_EACH_STUDENT_PER_SUBJECT` (
  `name` tinyint NOT NULL,
  `subject` tinyint NOT NULL,
  `AVG(rate)` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `STUDENT_PARENT`
--

DROP TABLE IF EXISTS `STUDENT_PARENT`;
/*!50001 DROP VIEW IF EXISTS `STUDENT_PARENT`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `STUDENT_PARENT` (
  `name` tinyint NOT NULL,
  `surname` tinyint NOT NULL,
  `parent_name` tinyint NOT NULL,
  `parent_surname` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `SUM_Student`
--

DROP TABLE IF EXISTS `SUM_Student`;
/*!50001 DROP VIEW IF EXISTS `SUM_Student`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `SUM_Student` (
  `name` tinyint NOT NULL,
  `SUM(rate)` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `parent_student`
--

DROP TABLE IF EXISTS `parent_student`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `parent_student` (
  `st_par_id` int(11) NOT NULL AUTO_INCREMENT,
  `student_id` int(11) NOT NULL,
  `parent_id` int(11) NOT NULL,
  PRIMARY KEY (`st_par_id`),
  KEY `fk_student` (`student_id`),
  KEY `fk_parent` (`parent_id`),
  CONSTRAINT `fk_student` FOREIGN KEY (`student_id`) REFERENCES `student` (`student_id`),
  CONSTRAINT `fk_parent` FOREIGN KEY (`parent_id`) REFERENCES `parents` (`parent_id`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parent_student`
--

LOCK TABLES `parent_student` WRITE;
/*!40000 ALTER TABLE `parent_student` DISABLE KEYS */;
INSERT INTO `parent_student` VALUES (1,7,6),(2,3,2),(3,6,5),(4,3,1),(5,3,1),(6,4,6);
/*!40000 ALTER TABLE `parent_student` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `parents`
--

DROP TABLE IF EXISTS `parents`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `parents` (
  `parent_id` int(11) NOT NULL AUTO_INCREMENT,
  `parent_name` varchar(25) NOT NULL,
  `parent_surname` varchar(25) NOT NULL,
  `currency` decimal(5,2) DEFAULT NULL,
  PRIMARY KEY (`parent_id`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parents`
--

LOCK TABLES `parents` WRITE;
/*!40000 ALTER TABLE `parents` DISABLE KEYS */;
INSERT INTO `parents` VALUES (1,'Tereza','Yeritsyan',999.99),(2,'Aharon','Saghatelyan',999.99),(3,'Araksya','Balyan',999.99),(4,'Vahan','Kirakosyan',999.99),(5,'Gayane','Asatryan',200.00),(6,'Hendo','Karapetyan',300.00);
/*!40000 ALTER TABLE `parents` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `student`
--

DROP TABLE IF EXISTS `student`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `student` (
  `student_id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(25) NOT NULL,
  `surname` varchar(25) DEFAULT NULL,
  `age` int(11) NOT NULL,
  PRIMARY KEY (`student_id`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `student`
--

LOCK TABLES `student` WRITE;
/*!40000 ALTER TABLE `student` DISABLE KEYS */;
INSERT INTO `student` VALUES (3,'Ani','Saghatelyan',22),(4,'Arman','Kirakosyan',19),(5,'Hasmik','Kirakosyan',19),(6,'Nane','Brutyan',23),(7,'Lusine','Asatryan',25);
/*!40000 ALTER TABLE `student` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `subject`
--

DROP TABLE IF EXISTS `subject`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `subject` (
  `subject_id` int(11) NOT NULL AUTO_INCREMENT,
  `subject` varchar(25) NOT NULL,
  PRIMARY KEY (`subject_id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `subject`
--

LOCK TABLES `subject` WRITE;
/*!40000 ALTER TABLE `subject` DISABLE KEYS */;
INSERT INTO `subject` VALUES (1,'math'),(2,'english'),(3,'physics'),(4,'geometry');
/*!40000 ALTER TABLE `subject` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `subject_student`
--

DROP TABLE IF EXISTS `subject_student`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `subject_student` (
  `st_subj_id` int(11) NOT NULL AUTO_INCREMENT,
  `student_id` int(11) NOT NULL,
  `subject_id` int(11) NOT NULL,
  `rate` int(11) DEFAULT NULL,
  PRIMARY KEY (`st_subj_id`),
  KEY `fk_student_subj` (`student_id`),
  KEY `fk_subject_student` (`subject_id`),
  CONSTRAINT `fk_student_subj` FOREIGN KEY (`student_id`) REFERENCES `student` (`student_id`),
  CONSTRAINT `fk_subject_student` FOREIGN KEY (`subject_id`) REFERENCES `subject` (`subject_id`)
) ENGINE=InnoDB AUTO_INCREMENT=26 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `subject_student`
--

LOCK TABLES `subject_student` WRITE;
/*!40000 ALTER TABLE `subject_student` DISABLE KEYS */;
INSERT INTO `subject_student` VALUES (1,4,1,7),(2,4,1,8),(3,4,1,10),(4,3,1,4),(5,3,2,5),(6,6,2,10),(7,6,2,8),(8,6,2,7),(9,6,1,7),(10,6,1,4),(11,6,3,4),(12,6,3,8),(13,7,3,8),(14,7,3,4),(15,7,1,4),(16,7,1,10),(17,5,1,10),(18,5,3,8),(19,5,3,9),(20,5,2,9),(21,3,2,9),(22,3,2,8),(23,4,2,8),(24,4,1,8),(25,4,2,4);
/*!40000 ALTER TABLE `subject_student` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Final view structure for view `AVG_EACH_STUDENT_PER_SUBJECT`
--

/*!50001 DROP TABLE IF EXISTS `AVG_EACH_STUDENT_PER_SUBJECT`*/;
/*!50001 DROP VIEW IF EXISTS `AVG_EACH_STUDENT_PER_SUBJECT`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `AVG_EACH_STUDENT_PER_SUBJECT` AS select `student`.`name` AS `name`,`subject`.`subject` AS `subject`,avg(`subject_student`.`rate`) AS `AVG(rate)` from ((`student` join `subject`) join `subject_student`) where ((`student`.`student_id` = `subject_student`.`student_id`) and (`subject`.`subject_id` = `subject_student`.`subject_id`)) group by `student`.`name`,`subject`.`subject` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `STUDENT_PARENT`
--

/*!50001 DROP TABLE IF EXISTS `STUDENT_PARENT`*/;
/*!50001 DROP VIEW IF EXISTS `STUDENT_PARENT`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `STUDENT_PARENT` AS select `student`.`name` AS `name`,`student`.`surname` AS `surname`,`parents`.`parent_name` AS `parent_name`,`parents`.`parent_surname` AS `parent_surname` from ((`student` join `parents`) join `parent_student`) where ((`parent_student`.`student_id` = `student`.`student_id`) and (`parents`.`parent_id` = `parent_student`.`parent_id`)) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `SUM_Student`
--

/*!50001 DROP TABLE IF EXISTS `SUM_Student`*/;
/*!50001 DROP VIEW IF EXISTS `SUM_Student`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `SUM_Student` AS select `student`.`name` AS `name`,sum(`subject_student`.`rate`) AS `SUM(rate)` from (`subject_student` join `student`) where (`student`.`student_id` = `subject_student`.`student_id`) group by `student`.`name` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2016-04-06  0:29:02
