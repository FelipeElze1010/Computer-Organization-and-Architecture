# 🚀 Sistema IoT — Monitoramento de Cápsula Espacial

**FIAP — Global Solution 2026 · 1º Semestre**  
Curso: Ciência da Computação  
Disciplina: Computer Organization and Architecture  

---

## 👨‍💻 Integrantes

| Nome | RM |
|------|----|
| Felipe Elze da Silva | 572024 |
| Henrique Eduardo da Silva | 571803 |

---

## 📋 Sobre o Projeto

Este projeto simula um sistema embarcado de Internet das Coisas (IoT) para monitoramento das condições físicas internas de uma cápsula espacial durante uma missão simulada.

O sistema coleta, processa e exibe em tempo real três grandezas físicas essenciais para a operação segura do módulo:

- 🌡️ **Temperatura** — via sensor TMP36
- 💡 **Luminosidade** — via LDR (fotoresistor)
- 📳 **Vibração** — via sensor SW-200D

---

## 🛠️ Componentes Utilizados

| Componente | Função | Pino |
|------------|--------|------|
| Arduino Uno | Microcontrolador principal | — |
| TMP36 | Sensor de temperatura | A0 |
| LDR (fotoresistor) | Sensor de luminosidade | A1 |
| SW-200D | Sensor de vibração | D2 |
| LCD 16x2 I2C | Display de exibição dos dados | SDA/SCL |
| Resistor 10kΩ | Divisor de tensão para o LDR | — |

---

## ⚙️ Como Funciona

O Arduino lê os três sensores a cada 1 segundo e exibe os dados no LCD 16x2 e no Serial Monitor:

- **Linha 1 do LCD:** Temperatura (°C) e Luminosidade
- **Linha 2 do LCD:** Status da Vibração (Normal / DETECTADA)

---

## 🔌 Como Executar a Simulação

1. Acesse o projeto no Tinkercad: **(https://www.tinkercad.com/things/k7efdU9hOvB/editel?returnTo=%2Fdashboard&sharecode=YSJn-otJyFiwuAI21S8_GpjWi11XNs7FLdlsFS2fgkE)**
2. Clique em **"Iniciar Simulação"**
3. Observe os dados sendo exibidos no LCD e no Serial Monitor (9600 baud)

---

## 📁 Estrutura do Repositório

```
📦 capsula-espacial-iot
 ┣ 📄 capsula_espacial.ino   — Código fonte do projeto
 ┣ 📄 README.md              — Documentação do projeto
 ┗ 📄 Relatorio_Tecnico.pdf  — Relatório técnico completo
```

---

## 🎯 ODS Relacionado

Este projeto está alinhado ao **ODS 9 — Indústria, Inovação e Infraestrutura**, demonstrando como tecnologias IoT e sistemas embarcados podem ser aplicados em contextos críticos como a exploração espacial.

---

## 🎓 Plataforma

Simulação desenvolvida no **Tinkercad** com **Arduino Uno**.
