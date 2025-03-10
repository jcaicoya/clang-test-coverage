1. Launch:
LLVM_PROFILE_FILE="test_primality.profraw" ./tests/test_primality
It generates test_primality.profraw

2. Launch:
llvm-profdata merge -sparse test_primality.profraw -o test_primality.profdata
It generates test_primality.profdata

3. Generate the report:
llvm-cov report ./tests/test_primality -instr-profile=test_primality.profdata > coverage_report.txt
It generates coverage_report.txt

llvm-cov show ./tests/test_primality -instr-profile=test_primality.profdata -format=html -output-dir=coverage_html
It generates coverage_html directory; we can see the results in a browser using this file: coverage_html/index.html
