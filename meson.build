project('ezxml', 'c', version: '0.8.6')

# Copyright 2004, 2005 Aaron Voisine <aaron@voisine.org>

#CFLAGS += -D EZXML_NOMMAP
#CFLAGS += -D EZXML_TEST

sources = [
    'src/ezxml.c',
]

incdir = include_directories('include')

ezxml = static_library('ezxml', sources, include_directories : [incdir], )

test_dir = meson.source_root()

test('Simple', executable('01_simple', 'test/01_simple.c', link_with: [ezxml], include_directories : [incdir],), workdir : test_dir)
