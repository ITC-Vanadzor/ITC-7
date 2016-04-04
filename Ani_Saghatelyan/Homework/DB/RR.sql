-- MySQL dump 10.13  Distrib 5.5.47, for debian-linux-gnu (x86_64)
--
-- Host: localhost    Database: RR
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
-- Table structure for table `Market`
--

DROP TABLE IF EXISTS `Market`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Market` (
  `market_id` int(11) NOT NULL,
  `market` text NOT NULL,
  PRIMARY KEY (`market_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Market`
--

LOCK TABLES `Market` WRITE;
/*!40000 ALTER TABLE `Market` DISABLE KEYS */;
/*!40000 ALTER TABLE `Market` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `OptionalFields`
--

DROP TABLE IF EXISTS `OptionalFields`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `OptionalFields` (
  `field_id` int(11) NOT NULL AUTO_INCREMENT,
  `optional_field` varchar(20) NOT NULL,
  PRIMARY KEY (`field_id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `OptionalFields`
--

LOCK TABLES `OptionalFields` WRITE;
/*!40000 ALTER TABLE `OptionalFields` DISABLE KEYS */;
INSERT INTO `OptionalFields` VALUES (1,'name'),(2,'surname'),(3,'birthday'),(4,'path_to_image');
/*!40000 ALTER TABLE `OptionalFields` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `OptionalUserAccount`
--

DROP TABLE IF EXISTS `OptionalUserAccount`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `OptionalUserAccount` (
  `optional_id` int(11) NOT NULL AUTO_INCREMENT,
  `user_id` int(11) NOT NULL,
  `field_id` int(11) NOT NULL,
  `optional_value` text NOT NULL,
  PRIMARY KEY (`optional_id`),
  KEY `user_id` (`user_id`),
  KEY `field_id` (`field_id`),
  CONSTRAINT `field_id` FOREIGN KEY (`field_id`) REFERENCES `OptionalFields` (`field_id`),
  CONSTRAINT `OptionalUserAccount_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `USER` (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `OptionalUserAccount`
--

LOCK TABLES `OptionalUserAccount` WRITE;
/*!40000 ALTER TABLE `OptionalUserAccount` DISABLE KEYS */;
INSERT INTO `OptionalUserAccount` VALUES (4,2,1,'Elenchuk');
/*!40000 ALTER TABLE `OptionalUserAccount` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ReceiptParser`
--

DROP TABLE IF EXISTS `ReceiptParser`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ReceiptParser` (
  `rr_id` int(11) NOT NULL AUTO_INCREMENT,
  `date_time` datetime NOT NULL,
  `market_id` int(11) NOT NULL,
  `user_id` int(11) NOT NULL,
  `path_to_image` varchar(100) NOT NULL,
  `comment` text,
  `upload_date` date DEFAULT NULL,
  `sum` text NOT NULL,
  PRIMARY KEY (`rr_id`),
  KEY `market_id` (`market_id`),
  KEY `user_id` (`user_id`),
  CONSTRAINT `ReceiptParser_ibfk_1` FOREIGN KEY (`market_id`) REFERENCES `Market` (`market_id`),
  CONSTRAINT `ReceiptParser_ibfk_2` FOREIGN KEY (`user_id`) REFERENCES `USER` (`user_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ReceiptParser`
--

LOCK TABLES `ReceiptParser` WRITE;
/*!40000 ALTER TABLE `ReceiptParser` DISABLE KEYS */;
/*!40000 ALTER TABLE `ReceiptParser` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `USER`
--

DROP TABLE IF EXISTS `USER`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `USER` (
  `user_id` int(11) NOT NULL AUTO_INCREMENT,
  `user_name` varchar(20) NOT NULL,
  `email` varchar(255) NOT NULL,
  `password` varchar(255) NOT NULL,
  PRIMARY KEY (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `USER`
--

LOCK TABLES `USER` WRITE;
/*!40000 ALTER TABLE `USER` DISABLE KEYS */;
INSERT INTO `USER` VALUES (1,'Ani','ani@mail.ru','1234567'),(2,'Elen','elen@mail.ru','041014');
/*!40000 ALTER TABLE `USER` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2016-04-05  1:38:40
