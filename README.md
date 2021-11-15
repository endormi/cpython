# extpyc

Very simple C extension (to understand how C extensions are built for python).

I suggest that you use `virtualenv`.

### Usage

Install:

```shell
pip install .
```

Run:

```shell
python test_pkg.py
```

Use:

```python
import isEven

print(isEven._is(2))
print(isEven.greet("Foo"))
print(isEven.hello_world())
```
