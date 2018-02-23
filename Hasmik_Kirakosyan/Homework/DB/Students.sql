-- MySQL dump 10.13  Distrib 5.6.28, for debian-linux-gnu (i686)
--
-- Host: localhost    Database: Students
-- ------------------------------------------------------
-- Server version	5.6.28-0ubuntu0.15.04.1

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
-- Temporary view structure for view `Math_average`
--

DROP TABLE IF EXISTS `Math_average`;
/*!50001 DROP VIEW IF EXISTS `Math_average`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `Math_average` AS SELECT 
 1 AS `AVG(rate)`*/;
SET character_set_client = @saved_cs_client;

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
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parents`
--

LOCK TABLES `parents` WRITE;
/*!40000 ALTER TABLE `parents` DISABLE KEYS */;
INSERT INTO `parents` VALUES (1,'Tereza','Yeritsyan',999.99),(2,'Aharon','Saghatelyan',999.99),(3,'Araksya','Balyan',999.99),(4,'Vahan','Kirakosyan',999.99);
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
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `student`
--

LOCK TABLES `student` WRITE;
/*!40000 ALTER TABLE `student` DISABLE KEYS */;
INSERT INTO `student` VALUES (3,'Ani','Saghatelyan',22),(4,'Hasmik','Kirakosyan',19),(5,'Hasmik','Kirakosyan',19);
/*!40000 ALTER TABLE `student` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `student_maxratings_view`
--

DROP TABLE IF EXISTS `student_maxratings_view`;
/*!50001 DROP VIEW IF EXISTS `student_maxratings_view`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `student_maxratings_view` AS SELECT 
 1 AS `name`,
 1 AS `subject`,
 1 AS `MAX(rate)`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `student_parent`
--

DROP TABLE IF EXISTS `student_parent`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `student_parent` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `st_id` int(11) DEFAULT NULL,
  `pr_id` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `st_id` (`st_id`),
  KEY `fk_student_parent` (`pr_id`),
  CONSTRAINT `fk_student_parent` FOREIGN KEY (`pr_id`) REFERENCES `parents` (`parent_id`),
  CONSTRAINT `student_parent_ibfk_1` FOREIGN KEY (`st_id`) REFERENCES `student` (`student_id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `student_parent`
--

LOCK TABLES `student_parent` WRITE;
/*!40000 ALTER TABLE `student_parent` DISABLE KEYS */;
INSERT INTO `student_parent` VALUES (1,3,1),(2,3,3),(3,3,4);
/*!40000 ALTER TABLE `student_parent` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `student_ratings_view`
--

DROP TABLE IF EXISTS `student_ratings_view`;
/*!50001 DROP VIEW IF EXISTS `student_ratings_view`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `student_ratings_view` AS SELECT 
 1 AS `name`,
 1 AS `subject`,
 1 AS `AVG(rate)`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `student_subject_rate`
--

DROP TABLE IF EXISTS `student_subject_rate`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `student_subject_rate` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `st_id` int(11) DEFAULT NULL,
  `sb_id` int(11) DEFAULT NULL,
  `rate` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `st_id` (`st_id`),
  KEY `sb_id` (`sb_id`),
  CONSTRAINT `student_subject_rate_ibfk_1` FOREIGN KEY (`st_id`) REFERENCES `student` (`student_id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `student_subject_rate_ibfk_2` FOREIGN KEY (`sb_id`) REFERENCES `subject` (`subject_id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `student_subject_rate`
--

LOCK TABLES `student_subject_rate` WRITE;
/*!40000 ALTER TABLE `student_subject_rate` DISABLE KEYS */;
INSERT INTO `student_subject_rate` VALUES (1,3,1,5),(2,3,2,4),(3,3,1,2),(4,3,3,5),(5,3,3,4),(6,5,3,4),(7,5,2,4),(8,5,1,5),(9,5,4,5),(10,5,4,2),(11,5,4,1);
/*!40000 ALTER TABLE `student_subject_rate` ENABLE KEYS */;
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
-- Final view structure for view `Math_average`
--

/*!50001 DROP VIEW IF EXISTS `Math_average`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `Math_average` AS select avg(`student_subject_rate`.`rate`) AS `AVG(rate)` from `student_subject_rate` where (`student_subject_rate`.`sb_id` = 1) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `student_maxratings_view`
--

/*!50001 DROP VIEW IF EXISTS `student_maxratings_view`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `student_maxratings_view` AS select `student`.`name` AS `name`,`subject`.`subject` AS `subject`,max(`student_subject_rate`.`rate`) AS `MAX(rate)` from ((`student` join `subject`) join `student_subject_rate`) where ((`student`.`student_id` = `student_subject_rate`.`st_id`) and (`subject`.`subject_id` = `student_subject_rate`.`sb_id`)) group by `student`.`name`,`subject`.`subject` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `student_ratings_view`
--

/*!50001 DROP VIEW IF EXISTS `student_ratings_view`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `student_ratings_view` AS select `student`.`name` AS `name`,`subject`.`subject` AS `subject`,avg(`student_subject_rate`.`rate`) AS `AVG(rate)` from ((`student` join `subject`) join `student_subject_rate`) where ((`student`.`student_id` = `student_subject_rate`.`st_id`) and (`subject`.`subject_id` = `student_subject_rate`.`sb_id`)) group by `student`.`name`,`subject`.`subject` */;
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

-- Dump completed on 2016-04-06  0:23:43
