﻿
CREATE TABLE FUNCIONARIOS (
  MATRICULA INTEGER NOT NULL,
  NOME_FUNC VARCHAR(100) NULL,
  DATA_NASC DATE NOT NULL,
  CPF CHAR(11) NOT NULL,
  COD_DEPTO INTEGER NOT NULL,
  COD_CARGO INTEGER NOT NULL,
  COD_NIVEL INTEGER NOT NULL,
  PRIMARY KEY(MATRICULA)
);

CREATE TABLE SALARIOS (
  COD_CARGO INTEGER NOT NULL,
  COD_NIVEL INTEGER NOT NULL,
  VAL_SALARIO NUMERIC NOT NULL,
  PRIMARY KEY(COD_CARGO, COD_NIVEL)
);

CREATE TABLE CARGOS (
  COD_CARGO INTEGER NOT NULL,
  NOME_CARGO VARCHAR(100) NOT NULL,
  PRE_REQUISITO VARCHAR(100) NULL,
  PRIMARY KEY(COD_CARGO)
);

CREATE TABLE DEPARTAMENTOS (
  COD_DEPTO INTEGER NOT NULL,
  NOME_DEPTO VARCHAR(100) NOT NULL,
  PRIMARY KEY(COD_DEPTO)
);

-- INSERÇÃO DE DADOS

--CARGOS

INSERT INTO CARGOS VALUES(444, 'VENDEDOR', NULL);
INSERT INTO CARGOS VALUES(555, 'ANALISTA DE SISTEMAS', 'SUPERIOR ANALISE');
INSERT INTO CARGOS VALUES(666, 'ADMINISTRADOR DE BANCO DE DADOS', 'CERTIFICACÃO DBA');
INSERT INTO CARGOS VALUES(777, 'WEB DESIGNER', 'TECNICO DE PROGRAMAÇÃO');
INSERT INTO CARGOS VALUES(888, 'GERENTE DE SOFTWARES', 'MBA OU CERTIFICAÇÃO PMP');
INSERT INTO CARGOS VALUES(999, 'DESENVOLVEDOR', 'SUPERIOR ANALISE');

-- DEPARTAMENTOS

INSERT INTO DEPARTAMENTOS VALUES(22001, 'CONTROLADORIA');
INSERT INTO DEPARTAMENTOS VALUES(22002, 'INFORMÁTICA');
INSERT INTO DEPARTAMENTOS VALUES(22003, 'INFRAESTRUTURA E SUPORTE');
INSERT INTO DEPARTAMENTOS VALUES(22004, 'VENDAS');
INSERT INTO DEPARTAMENTOS VALUES(22005, 'CONTABILIDADE');
INSERT INTO DEPARTAMENTOS VALUES(22006, 'RECURSOS HUMANOS');

-- SALARIOS 

INSERT INTO SALARIOS VALUES(444, 1, 2500.00);
INSERT INTO SALARIOS VALUES(444, 2, 3000.00);

INSERT INTO SALARIOS VALUES(555, 1, 4500.00);
INSERT INTO SALARIOS VALUES(555, 2, 5000.00);
INSERT INTO SALARIOS VALUES(555, 3, 6000.00);
INSERT INTO SALARIOS VALUES(555, 4, 7000.00);
INSERT INTO SALARIOS VALUES(555, 5, 7500.00);

INSERT INTO SALARIOS VALUES(666, 1, 4950.00);
INSERT INTO SALARIOS VALUES(666, 2, 5500.00);
INSERT INTO SALARIOS VALUES(666, 3, 6600.00);
INSERT INTO SALARIOS VALUES(666, 4, 7700.00);
INSERT INTO SALARIOS VALUES(666, 5, 8250.00);

INSERT INTO SALARIOS VALUES(777, 1, 3450.00);
INSERT INTO SALARIOS VALUES(777, 2, 4200.00);
INSERT INTO SALARIOS VALUES(777, 3, 4400.00);
INSERT INTO SALARIOS VALUES(777, 4, 4900.00);
INSERT INTO SALARIOS VALUES(777, 5, 5200.00);

INSERT INTO SALARIOS VALUES(888, 1, 7000.00);
INSERT INTO SALARIOS VALUES(888, 2, 7800.00);
INSERT INTO SALARIOS VALUES(888, 3, 8500.00);
INSERT INTO SALARIOS VALUES(888, 4, 10000.00);
INSERT INTO SALARIOS VALUES(888, 5, 11500.00);

INSERT INTO SALARIOS VALUES(999, 1, 2500.00);
INSERT INTO SALARIOS VALUES(999, 2, 3000.00);
INSERT INTO SALARIOS VALUES(999, 3, 3200.00);
INSERT INTO SALARIOS VALUES(999, 4, 3800.00);

-- FUNCIONARIOS

INSERT INTO FUNCIONARIOS VALUES(8801001, 'ADEMIR JOSÉ DA SILVA', '01/02/1970', '11111111111', 22004, 444, 1);
INSERT INTO FUNCIONARIOS VALUES(8801002, 'ALEXANDRE GOMES SILVA', '01/03/1972', '22222222222', 22004, 444, 2);
INSERT INTO FUNCIONARIOS VALUES(8801003, 'ALICE CARDOSO OLIVEIRA', '01/04/1974', '33333333333', 22002, 999, 1);
INSERT INTO FUNCIONARIOS VALUES(8801004, 'BIANCA FRANCA SOUZA', '01/05/1976', '99887766554', 22002, 999, 1);
INSERT INTO FUNCIONARIOS VALUES(8801005, 'CAMILA OLIVEIRA DA SILVA', '01/06/1980', '11223344556', 22002, 999, 2);
INSERT INTO FUNCIONARIOS VALUES(8801006, 'MARCIO RIBEIRO SANTOS', '01/07/1982', '34567234678', 22002, 999, 2);
INSERT INTO FUNCIONARIOS VALUES(8801007, 'KÁTIA BEZERRA DA SILVA', '01/08/1984', '09877789121', 22003, 666, 1);
INSERT INTO FUNCIONARIOS VALUES(8801008, 'KLEBER ARAÚJO SANTOS', '01/09/1988', '02932345410', 22003, 666, 1);
INSERT INTO FUNCIONARIOS VALUES(8801009, 'MARIA APARECIDA ROCHA', '01/10/1990', '11001002011', 22001, 555, 1);
INSERT INTO FUNCIONARIOS VALUES(8801010, 'MELISSA FONTES SILVA', '01/11/1992', '22200200344', 22001, 888, 4);
INSERT INTO FUNCIONARIOS VALUES(8801011, 'ROSA MARIA DOS SANTOS', '01/12/1994', '33300300455', 22002, 999, 4);
INSERT INTO FUNCIONARIOS VALUES(8801012, 'ROSANE OLIVEIRA CAMPOS', '01/01/1996', '44400400566', 22001, 555, 3);
INSERT INTO FUNCIONARIOS VALUES(8801013, 'SARA FERREIRA DA SILVA', '01/02/2000', '55500500677', 22002, 777, 2);


-- SELECTS
--01 incompleta
SELECT NOME_FUNC, 
	NOME_CARGO, 
	FUNCIONARIOS.COD_NIVEL,
	(SELECT VAL_SALARIO, SALARIOS.COD_NIVEL AS "PROXIMO_NIVEL" FROM SALARIOS WHERE (FUNCIONARIOS.COD_NIVEL +1) = SALARIOS.COD_NIVEL LIMIT 1),
	(SELECT VAL_SALARIO "PROXIMO_NIVEL" FROM SALARIOS WHERE PROXIMO_NIVEL = SALARIOS.COD_NIVEL LIMIT 1)
	FROM FUNCIONARIOS, CARGOS
	WHERE (FUNCIONARIOS.COD_CARGO = CARGOS.COD_CARGO)

--02
SELECT 
(SELECT NOME_DEPTO FROM DEPARTAMENTOS WHERE DEPARTAMENTOS.COD_DEPTO = FUNCIONARIOS.COD_DEPTO), 
COUNT(*), 
SUM(VAL_SALARIO) AS "SAL_DEPARTAMENTO", 
ROUND(AVG(VAL_SALARIO), 2)AS "MEDIA" 
FROM FUNCIONARIOS, SALARIOS
WHERE (FUNCIONARIOS.COD_CARGO = SALARIOS.COD_CARGO 
AND FUNCIONARIOS.COD_NIVEL = SALARIOS.COD_NIVEL) 
GROUP BY FUNCIONARIOS.COD_DEPTO ORDER BY "SAL_DEPARTAMENTO" DESC

--03
SELECT NOME_FUNC, NOME_DEPTO, NOME_CARGO, VAL_SALARIO
FROM DEPARTAMENTOS, FUNCIONARIOS, CARGOS, SALARIOS
WHERE (NOME_DEPTO = 'VENDAS' OR NOME_DEPTO = 'INFORMÁTICA') 
AND (FUNCIONARIOS.COD_DEPTO = DEPARTAMENTOS.COD_DEPTO) 
AND (FUNCIONARIOS.COD_CARGO = CARGOS.COD_CARGO) 
AND (FUNCIONARIOS.COD_CARGO = SALARIOS.COD_CARGO AND FUNCIONARIOS.COD_NIVEL = SALARIOS.COD_NIVEL) 