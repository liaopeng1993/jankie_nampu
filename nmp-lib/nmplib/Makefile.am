#!/bin/sh
SUBDIRS=src test
CURRENTPATH=$(shell /bin/pwd)
INCLUDES=-I$(CURRENTPATH) \
	 -I$(CURRENTPATH)/include \
	 -I$(HOME)/usr/include \
         -I$(HOME)/usr/include/nampu

export INCLUDES

ACLOCAL_AMFLAGS=-I m4
