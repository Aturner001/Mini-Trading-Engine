# Mini-Trading-Engine
Sub-microsecond C++20 trading engine | 0-1μs round-trip latency on 7950x | pure console gateway

A minimal, console-based, ultra-low-latency trading engine 
written in pure C++20

### Current Performance (AMD 7950x)
- Engine round-trip latency: **~0-1 μs** 
- Timestamp resolution: nanoseconds via 'steady_clock'
- Engine round trip sub **~24 μs** (In GitHub Codespaces )

- <img width="521" height="130" alt="Screenshot 2025-11-21 005018" src="https://github.com/user-attachments/assets/c2886a9d-9eaf-450c-9c8e-2e69d6af396d" />


### How to run
```bash
g++ -march=native -std=c++20 MiniTradingEngine.cpp -o
MiniTradingEngine
./MiniTradingEngine
