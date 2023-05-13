/* veiculo logico: */

CREATE TABLE VEICULO (
    REN VARCHAR PRIMARY KEY,
    NOME VARCHAR
);

CREATE TABLE CARRO (
    ID VARCHAR,
    MODELO VARCHAR,
    ANO VARCHAR,
    FK_VEICULO_REN VARCHAR,
    PRIMARY KEY (ID, FK_VEICULO_REN)
);

CREATE TABLE CAMINHAO (
    ID VARCHAR,
    MODELO VARCHAR,
    ANO VARCHAR,
    FK_VEICULO_REN VARCHAR,
    PRIMARY KEY (ID, FK_VEICULO_REN)
);
 
ALTER TABLE CARRO ADD CONSTRAINT FK_CARRO_2
    FOREIGN KEY (FK_VEICULO_REN)
    REFERENCES VEICULO (REN)
    ON DELETE CASCADE;
 
ALTER TABLE CAMINHAO ADD CONSTRAINT FK_CAMINHAO_2
    FOREIGN KEY (FK_VEICULO_REN)
    REFERENCES VEICULO (REN)
    ON DELETE CASCADE;