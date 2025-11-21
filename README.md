# Mini-Trading-Engine
Sub-microsecond C++20 trading engine | 0-1μs round-trip latency on 7950x | pure console gateway

A minimal, console-based, ultra-low-latency trading engine 
written in pure C++20

### Current Performance (AMD 7950x)
- Engine round-trip latency: **~0-1 μs** 
- Timestamp resolution: nanoseconds via 'steady_clock'
- Engine round trip sub **~36 μs** (In GitHub Codespaces )

- <img width="538" height="133" alt="Screenshot 2025-11-21 003636" src="https://github.com/user-attachments/assets/3cfb62f4-8599-4579-9176-9ef9a199842d" />

### How to run
```bash
g++ -march=native -std=c++20 MiniTradingEngin.cpp -o
MiniTradingEngine
./MiniTradingEngine
