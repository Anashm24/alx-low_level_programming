# Hash Table in C

This repository contains an implementation of a hash table in the C programming language.

## Overview

A hash table is a data structure that implements an associative array abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

## Features

- The hash table is implemented using chaining to resolve collisions.
- The hash function used is a simple sum of ASCII values modulo the size of the table.
- The hash table dynamically allocates memory for items as they are inserted.
