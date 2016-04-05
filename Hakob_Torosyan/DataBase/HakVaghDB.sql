-- MySQL dump 10.13  Distrib 5.5.47, for debian-linux-gnu (x86_64)
--
-- Host: localhost    Database: EasyBoard
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
-- Temporary table structure for view `arajadimutyun`
--

DROP TABLE IF EXISTS `arajadimutyun`;
/*!50001 DROP VIEW IF EXISTS `arajadimutyun`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `arajadimutyun` (
  `id` tinyint NOT NULL,
  `name` tinyint NOT NULL,
  `surname` tinyint NOT NULL,
  `max(avg_sign)` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `average_mark`
--

DROP TABLE IF EXISTS `average_mark`;
/*!50001 DROP VIEW IF EXISTS `average_mark`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `average_mark` (
  `v_id` tinyint NOT NULL,
  `ararka` tinyint NOT NULL,
  `student_id` tinyint NOT NULL,
  `v_list_id` tinyint NOT NULL,
  `sign` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `average_mark1`
--

DROP TABLE IF EXISTS `average_mark1`;
/*!50001 DROP VIEW IF EXISTS `average_mark1`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `average_mark1` (
  `id` tinyint NOT NULL,
  `name` tinyint NOT NULL,
  `surname` tinyint NOT NULL,
  `v_id` tinyint NOT NULL,
  `ararka` tinyint NOT NULL,
  `student_id` tinyint NOT NULL,
  `v_list_id` tinyint NOT NULL,
  `sign` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `gnahatakan`
--

DROP TABLE IF EXISTS `gnahatakan`;
/*!50001 DROP VIEW IF EXISTS `gnahatakan`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `gnahatakan` (
  `id` tinyint NOT NULL,
  `name` tinyint NOT NULL,
  `surname` tinyint NOT NULL,
  `ararka` tinyint NOT NULL,
  `avg(sign)` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `gnahatakan1`
--

DROP TABLE IF EXISTS `gnahatakan1`;
/*!50001 DROP VIEW IF EXISTS `gnahatakan1`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `gnahatakan1` (
  `id` tinyint NOT NULL,
  `name` tinyint NOT NULL,
  `surname` tinyint NOT NULL,
  `avg_sign` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `numbers`
--

DROP TABLE IF EXISTS `numbers`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `numbers` (
  `student_id` int(11) NOT NULL,
  `v_list_id` int(11) NOT NULL,
  `sign` int(11) NOT NULL,
  KEY `student_id` (`student_id`),
  KEY `v_list_id` (`v_list_id`),
  CONSTRAINT `numbers_ibfk_1` FOREIGN KEY (`student_id`) REFERENCES `students` (`id`),
  CONSTRAINT `numbers_ibfk_2` FOREIGN KEY (`v_list_id`) REFERENCES `value_list` (`v_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `numbers`
--

LOCK TABLES `numbers` WRITE;
/*!40000 ALTER TABLE `numbers` DISABLE KEYS */;
/*!40000 ALTER TABLE `numbers` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `parrents`
--

DROP TABLE IF EXISTS `parrents`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `parrents` (
  `p_id` int(11) NOT NULL AUTO_INCREMENT,
  `student_id` int(11) NOT NULL,
  `pname` varchar(20) DEFAULT NULL,
  `psurname` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`p_id`),
  KEY `student_id` (`student_id`),
  CONSTRAINT `parrents_ibfk_1` FOREIGN KEY (`student_id`) REFERENCES `students` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parrents`
--

LOCK TABLES `parrents` WRITE;
/*!40000 ALTER TABLE `parrents` DISABLE KEYS */;
/*!40000 ALTER TABLE `parrents` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary table structure for view `parrents_list`
--

DROP TABLE IF EXISTS `parrents_list`;
/*!50001 DROP VIEW IF EXISTS `parrents_list`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `parrents_list` (
  `id` tinyint NOT NULL,
  `name` tinyint NOT NULL,
  `surname` tinyint NOT NULL,
  `pname` tinyint NOT NULL,
  `psurname` tinyint NOT NULL
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
  `name` varchar(20) DEFAULT NULL,
  `surname` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `students`
--

LOCK TABLES `students` WRITE;
/*!40000 ALTER TABLE `students` DISABLE KEYS */;
/*!40000 ALTER TABLE `students` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `value_list`
--

DROP TABLE IF EXISTS `value_list`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `value_list` (
  `v_id` int(11) NOT NULL AUTO_INCREMENT,
  `ararka` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`v_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `value_list`
--

LOCK TABLES `value_list` WRITE;
/*!40000 ALTER TABLE `value_list` DISABLE KEYS */;
/*!40000 ALTER TABLE `value_list` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Final view structure for view `arajadimutyun`
--

/*!50001 DROP TABLE IF EXISTS `arajadimutyun`*/;
/*!50001 DROP VIEW IF EXISTS `arajadimutyun`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `arajadimutyun` AS select `gnahatakan1`.`id` AS `id`,`gnahatakan1`.`name` AS `name`,`gnahatakan1`.`surname` AS `surname`,max(`gnahatakan1`.`avg_sign`) AS `max(avg_sign)` from `gnahatakan1` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `average_mark`
--

/*!50001 DROP TABLE IF EXISTS `average_mark`*/;
/*!50001 DROP VIEW IF EXISTS `average_mark`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `average_mark` AS select `value_list`.`v_id` AS `v_id`,`value_list`.`ararka` AS `ararka`,`numbers`.`student_id` AS `student_id`,`numbers`.`v_list_id` AS `v_list_id`,`numbers`.`sign` AS `sign` from (`value_list` join `numbers` on((`value_list`.`v_id` = `numbers`.`v_list_id`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `average_mark1`
--

/*!50001 DROP TABLE IF EXISTS `average_mark1`*/;
/*!50001 DROP VIEW IF EXISTS `average_mark1`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `average_mark1` AS select `students`.`id` AS `id`,`students`.`name` AS `name`,`students`.`surname` AS `surname`,`average_mark`.`v_id` AS `v_id`,`average_mark`.`ararka` AS `ararka`,`average_mark`.`student_id` AS `student_id`,`average_mark`.`v_list_id` AS `v_list_id`,`average_mark`.`sign` AS `sign` from (`students` join `average_mark` on((`students`.`id` = `average_mark`.`v_list_id`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `gnahatakan`
--

/*!50001 DROP TABLE IF EXISTS `gnahatakan`*/;
/*!50001 DROP VIEW IF EXISTS `gnahatakan`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `gnahatakan` AS select `average_mark1`.`id` AS `id`,`average_mark1`.`name` AS `name`,`average_mark1`.`surname` AS `surname`,`average_mark1`.`ararka` AS `ararka`,avg(`average_mark1`.`sign`) AS `avg(sign)` from `average_mark1` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `gnahatakan1`
--

/*!50001 DROP TABLE IF EXISTS `gnahatakan1`*/;
/*!50001 DROP VIEW IF EXISTS `gnahatakan1`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `gnahatakan1` AS select `average_mark1`.`id` AS `id`,`average_mark1`.`name` AS `name`,`average_mark1`.`surname` AS `surname`,avg(`average_mark1`.`sign`) AS `avg_sign` from `average_mark1` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `parrents_list`
--

/*!50001 DROP TABLE IF EXISTS `parrents_list`*/;
/*!50001 DROP VIEW IF EXISTS `parrents_list`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `parrents_list` AS select `students`.`id` AS `id`,`students`.`name` AS `name`,`students`.`surname` AS `surname`,`parrents`.`pname` AS `pname`,`parrents`.`psurname` AS `psurname` from (`students` join `parrents` on((`students`.`id` = `parrents`.`student_id`))) */;
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

-- Dump completed on 2016-04-05 17:52:45
