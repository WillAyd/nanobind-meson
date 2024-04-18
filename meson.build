project(
    'my_project',
    'cpp',
    version: '0.0.1-DEV',
    license: 'Apache 2.0',
    meson_version: '>=1.3.0',
    default_options: [
        'buildtype=release',
        'cpp_std=c++17',
    ]
)

nanobind_dep = dependency('nanobind')
py = import('python').find_installation()
py.extension_module(
    'my_ext',
    ['my_ext.cpp'],
    dependencies: [nanobind_dep],
    install: true
)
