-- MySQL dump 10.13  Distrib 5.5.47, for debian-linux-gnu (x86_64)
--
-- Host: localhost    Database: StudentsAndMarks
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
-- Temporary table structure for view `arajadimox`
--

DROP TABLE IF EXISTS `arajadimox`;
/*!50001 DROP VIEW IF EXISTS `arajadimox`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `arajadimox` (
  `s_name` tinyint NOT NULL,
  `p_name` tinyint NOT NULL,
  `AVG(mark)` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `avg_mark`
--

DROP TABLE IF EXISTS `avg_mark`;
/*!50001 DROP VIEW IF EXISTS `avg_mark`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `avg_mark` (
  `s_name` tinyint NOT NULL,
  `p_name` tinyint NOT NULL,
  `AVG(mark)` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `marks`
--

DROP TABLE IF EXISTS `marks`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `marks` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `student_id` int(11) NOT NULL,
  `mark` int(11) DEFAULT NULL,
  `subject_id` int(11) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `mark_id_fk` (`student_id`),
  KEY `subject_id_fk` (`subject_id`),
  CONSTRAINT `mark_id_fk` FOREIGN KEY (`student_id`) REFERENCES `students` (`id`),
  CONSTRAINT `subject_id_fk` FOREIGN KEY (`subject_id`) REFERENCES `subjects` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=61 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `marks`
--

LOCK TABLES `marks` WRITE;
/*!40000 ALTER TABLE `marks` DISABLE KEYS */;
INSERT INTO `marks` VALUES (1,1,18,1),(2,1,15,1),(3,1,17,1),(4,1,14,1),(5,1,19,1),(6,1,19,2),(7,1,18,2),(8,1,18,2),(9,1,16,2),(10,1,17,2),(11,1,17,3),(12,1,17,3),(13,1,18,3),(14,1,18,3),(15,1,19,3),(16,2,19,1),(17,2,17,1),(18,2,17,1),(19,2,17,1),(20,2,15,1),(21,2,15,2),(22,2,17,2),(23,2,17,2),(24,2,18,2),(25,2,18,2),(26,2,18,3),(27,2,17,3),(28,2,17,3),(29,2,15,3),(30,2,20,3),(31,3,20,1),(32,3,20,1),(33,3,17,1),(34,3,17,1),(35,3,16,1),(36,3,16,2),(37,3,16,2),(38,3,16,2),(39,3,18,2),(40,3,18,2),(41,3,18,3),(42,3,18,3),(43,3,19,3),(44,3,17,3),(45,3,17,3),(46,4,18,1),(47,4,19,1),(48,4,17,1),(49,4,17,1),(50,4,17,1),(51,4,17,2),(52,4,17,2),(53,4,17,2),(54,4,18,2),(55,4,18,2),(56,4,18,3),(57,4,18,3),(58,4,18,3),(59,4,14,3),(60,4,14,3);
/*!40000 ALTER TABLE `marks` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary table structure for view `parent_child`
--

DROP TABLE IF EXISTS `parent_child`;
/*!50001 DROP VIEW IF EXISTS `parent_child`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `parent_child` (
  `s_name` tinyint NOT NULL,
  `p_name` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `parents`
--

DROP TABLE IF EXISTS `parents`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `parents` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `student_id` int(11) NOT NULL,
  `p_name` varchar(15) DEFAULT NULL,
  `surname` varchar(20) DEFAULT NULL,
  `age` int(11) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `parent_id_fk` (`student_id`),
  CONSTRAINT `parent_id_fk` FOREIGN KEY (`student_id`) REFERENCES `students` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parents`
--

LOCK TABLES `parents` WRITE;
/*!40000 ALTER TABLE `parents` DISABLE KEYS */;
INSERT INTO `parents` VALUES (1,1,'Ani','Saghatelyan',23),(2,1,'Hayk','Hovhannisyan',25),(3,2,'Jirayr','Stepanyan',22),(4,3,'Vagharsh','Hakobyan',41),(5,4,'Araksya','Hambaryan',25),(6,5,'Hasmik','Kirakosyan',19);
/*!40000 ALTER TABLE `parents` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary table structure for view `parents_childs`
--

DROP TABLE IF EXISTS `parents_childs`;
/*!50001 DROP VIEW IF EXISTS `parents_childs`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `parents_childs` (
  `s_name` tinyint NOT NULL,
  `p_name` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `students`
--

DROP TABLE IF EXISTS `students`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `students` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `s_name` varchar(15) DEFAULT NULL,
  `surname` varchar(20) DEFAULT NULL,
  `age` int(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `students`
--

LOCK TABLES `students` WRITE;
/*!40000 ALTER TABLE `students` DISABLE KEYS */;
INSERT INTO `students` VALUES (1,'Elen','Hovhannisyan',2),(2,'Junior','Stepanyan',18),(3,'Artak','Hakobyan',8),(4,'Arevik','hambaryan',19),(5,'Miasnik','Miasnikyan',21);
/*!40000 ALTER TABLE `students` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `subjects`
--

DROP TABLE IF EXISTS `subjects`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `subjects` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `sub_name` varchar(15) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `subjects`
--

LOCK TABLES `subjects` WRITE;
/*!40000 ALTER TABLE `subjects` DISABLE KEYS */;
INSERT INTO `subjects` VALUES (1,'Qimia'),(2,'Fizika'),(3,'Matem');
/*!40000 ALTER TABLE `subjects` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Final view structure for view `arajadimox`
--

/*!50001 DROP TABLE IF EXISTS `arajadimox`*/;
/*!50001 DROP VIEW IF EXISTS `arajadimox`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `arajadimox` AS select `students`.`s_name` AS `s_name`,`parents`.`p_name` AS `p_name`,avg(`marks`.`mark`) AS `AVG(mark)` from ((`marks` join `students`) join `parents`) where ((`marks`.`student_id` = `students`.`id`) and (`parents`.`student_id` = `students`.`id`)) group by `students`.`s_name` order by avg(`marks`.`mark`) desc limit 1 */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `avg_mark`
--

/*!50001 DROP TABLE IF EXISTS `avg_mark`*/;
/*!50001 DROP VIEW IF EXISTS `avg_mark`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `avg_mark` AS select `students`.`s_name` AS `s_name`,`parents`.`p_name` AS `p_name`,avg(`marks`.`mark`) AS `AVG(mark)` from ((`marks` join `students`) join `parents`) where ((`marks`.`student_id` = `students`.`id`) and (`parents`.`student_id` = `students`.`id`)) group by `students`.`s_name` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `parent_child`
--

/*!50001 DROP TABLE IF EXISTS `parent_child`*/;
/*!50001 DROP VIEW IF EXISTS `parent_child`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `parent_child` AS select `students`.`s_name` AS `s_name`,`parents`.`p_name` AS `p_name` from (`students` join `parents`) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `parents_childs`
--

/*!50001 DROP TABLE IF EXISTS `parents_childs`*/;
/*!50001 DROP VIEW IF EXISTS `parents_childs`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `parents_childs` AS select `students`.`s_name` AS `s_name`,`parents`.`p_name` AS `p_name` from (`students` join `parents`) where (`parents`.`student_id` = `students`.`id`) */;
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

-- Dump completed on 2016-04-05 22:54:31
