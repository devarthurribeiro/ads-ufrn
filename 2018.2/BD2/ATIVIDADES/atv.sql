-- MySQL Script generated by MySQL Workbench
-- dom 26 ago 2018 23:06:02 -03
-- Model: New Model    Version: 1.0
-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`Medico`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Medico` (
  `id` INT NOT NULL,
  `nome` VARCHAR(120) NULL,
  `especialidade` VARCHAR(40) NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Paciente`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Paciente` (
  `id` INT NOT NULL,
  `nome` VARCHAR(120) NULL,
  `endereco` VARCHAR(150) NULL,
  `cpf` VARCHAR(11) NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Consulta`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Consulta` (
  `id` INT NOT NULL,
  `data` DATE NULL,
  `idPaciente` INT NOT NULL,
  `idMedico` INT NOT NULL,
  PRIMARY KEY (`id`),
  INDEX `fk_Consulta_Medico_idx` (`idMedico` ASC),
  INDEX `fk_Consulta_Paciente1_idx` (`idPaciente` ASC),
  CONSTRAINT `fk_Consulta_Medico`
    FOREIGN KEY (`idMedico`)
    REFERENCES `mydb`.`Medico` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Consulta_Paciente1`
    FOREIGN KEY (`idPaciente`)
    REFERENCES `mydb`.`Paciente` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Exames`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Exames` (
  `id` INT NOT NULL,
  `nome` VARCHAR(45) NULL,
  `tipo` VARCHAR(45) NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`ConsultaExames`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`ConsultaExames` (
  `idConsulta` INT NOT NULL,
  `idExames` INT NOT NULL,
  INDEX `fk_ConsultaExames_Consulta1_idx` (`idConsulta` ASC),
  INDEX `fk_ConsultaExames_Exames1_idx` (`idExames` ASC),
  CONSTRAINT `fk_ConsultaExames_Consulta1`
    FOREIGN KEY (`idConsulta`)
    REFERENCES `mydb`.`Consulta` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_ConsultaExames_Exames1`
    FOREIGN KEY (`idExames`)
    REFERENCES `mydb`.`Exames` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;

-- -----------------------------------------------------
-- Data for table `mydb`.`Medico`
-- -----------------------------------------------------
START TRANSACTION;
USE `mydb`;
INSERT INTO `mydb`.`Medico` (`id`, `nome`, `especialidade`) VALUES (1, 'Carla', 'cardio');
INSERT INTO `mydb`.`Medico` (`id`, `nome`, `especialidade`) VALUES (2, 'Danilo', 'cardio');
INSERT INTO `mydb`.`Medico` (`id`, `nome`, `especialidade`) VALUES (3, 'Joao', 'neuro');
INSERT INTO `mydb`.`Medico` (`id`, `nome`, `especialidade`) VALUES (4, 'Pedro', 'obstetra');

COMMIT;


-- -----------------------------------------------------
-- Data for table `mydb`.`Paciente`
-- -----------------------------------------------------
START TRANSACTION;
USE `mydb`;
INSERT INTO `mydb`.`Paciente` (`id`, `nome`, `endereco`, `cpf`) VALUES (1, 'Ana', 'Rua1', '123');
INSERT INTO `mydb`.`Paciente` (`id`, `nome`, `endereco`, `cpf`) VALUES (2, 'Lucas', 'Rua2', '234');
INSERT INTO `mydb`.`Paciente` (`id`, `nome`, `endereco`, `cpf`) VALUES (3, 'Daniel', 'Rua3', '345');
INSERT INTO `mydb`.`Paciente` (`id`, `nome`, `endereco`, `cpf`) VALUES (4, 'Guilherme', 'Rua4', '456');
INSERT INTO `mydb`.`Paciente` (`id`, `nome`, `endereco`, `cpf`) VALUES (5, 'Sarah', 'Rua5', '567');

COMMIT;


-- -----------------------------------------------------
-- Data for table `mydb`.`Consulta`
-- -----------------------------------------------------
START TRANSACTION;
USE `mydb`;
INSERT INTO `mydb`.`Consulta` (`id`, `data`, `idPaciente`, `idMedico`) VALUES (1, '2016-09-10', 1, 1);
INSERT INTO `mydb`.`Consulta` (`id`, `data`, `idPaciente`, `idMedico`) VALUES (2, '2017-01-10', 2, 1);
INSERT INTO `mydb`.`Consulta` (`id`, `data`, `idPaciente`, `idMedico`) VALUES (3, '2017-02-10', 2, 2);
INSERT INTO `mydb`.`Consulta` (`id`, `data`, `idPaciente`, `idMedico`) VALUES (4, '2017-03-10', 2, 3);
INSERT INTO `mydb`.`Consulta` (`id`, `data`, `idPaciente`, `idMedico`) VALUES (5, '2017-04-10', 2, 4);
INSERT INTO `mydb`.`Consulta` (`id`, `data`, `idPaciente`, `idMedico`) VALUES (6, '2017-01-10', 3, 1);
INSERT INTO `mydb`.`Consulta` (`id`, `data`, `idPaciente`, `idMedico`) VALUES (7, '2017-01-10', 4, 1);
INSERT INTO `mydb`.`Consulta` (`id`, `data`, `idPaciente`, `idMedico`) VALUES (8, '2017-01-10', 5, 1);

COMMIT;


-- -----------------------------------------------------
-- Data for table `mydb`.`Exames`
-- -----------------------------------------------------
START TRANSACTION;
USE `mydb`;
INSERT INTO `mydb`.`Exames` (`id`, `nome`, `tipo`) VALUES (1, 'Colesterol', 'sangue');
INSERT INTO `mydb`.`Exames` (`id`, `nome`, `tipo`) VALUES (2, 'TGO', 'sangue');
INSERT INTO `mydb`.`Exames` (`id`, `nome`, `tipo`) VALUES (3, 'TGP', 'sangue');
INSERT INTO `mydb`.`Exames` (`id`, `nome`, `tipo`) VALUES (4, 'C1', 'invasivo');
INSERT INTO `mydb`.`Exames` (`id`, `nome`, `tipo`) VALUES (5, 'Eletro', 'fisico');
INSERT INTO `mydb`.`Exames` (`id`, `nome`, `tipo`) VALUES (6, 'Eco', 'fisico');
INSERT INTO `mydb`.`Exames` (`id`, `nome`, `tipo`) VALUES (7, 'Ultra', 'fisico');

COMMIT;


-- -----------------------------------------------------
-- Data for table `mydb`.`ConsultaExames`
-- -----------------------------------------------------
START TRANSACTION;
USE `mydb`;
INSERT INTO `mydb`.`ConsultaExames` (`idConsulta`, `idExames`) VALUES (1, 1);
INSERT INTO `mydb`.`ConsultaExames` (`idConsulta`, `idExames`) VALUES (1, 2);
INSERT INTO `mydb`.`ConsultaExames` (`idConsulta`, `idExames`) VALUES (1, 7);
INSERT INTO `mydb`.`ConsultaExames` (`idConsulta`, `idExames`) VALUES (2, 3);
INSERT INTO `mydb`.`ConsultaExames` (`idConsulta`, `idExames`) VALUES (6, 7);

COMMIT;
