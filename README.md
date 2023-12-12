# minimalQt5
Minimal Qt5-based project: using QML for the view and qmake as buildsystem

## build
* main:  `qmake && make && ./project`
* to build the test suite, run `qmake "CONFIG+=test" && make && ./test_project`

## test output
```bash
********* Start testing of TestSimpleClass *********
Config: Using QtTest library 5.15.11, Qt 5.15.11 (x86_64-little_endian-lp64 shared (dynamic) release build; by GCC 13.2.1 20230801), manjaro unknown
PASS   : TestSimpleClass::initTestCase()
PASS   : TestSimpleClass::testSayHello()
PASS   : TestSimpleClass::cleanupTestCase()
Totals: 3 passed, 0 failed, 0 skipped, 0 blacklisted, 0ms
********* Finished testing of TestSimpleClass *********
```
