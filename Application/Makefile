CC =gcc
DEF_FLAGS =-MP -MD

INCLUDES_PATH      =../includes
SOURCES_FILES_PATH =. ../src

CC_FLAGS = $(foreach D,$(INCLUDES_PATH), -I$(D))

CFILES = $(foreach D,$(SOURCES_FILES_PATH),$(wildcard $(D)/*.c))

BIN =bin

OBJECTS  = $(patsubst %.c,%.o,$(CFILES))
DEPDILES = $(patsubst %.c,%.d,$(CFILES))

all: $(BIN)

$(BIN): $(OBJECTS)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CC_FLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJECTS) $(BIN) $(DEPDILES)