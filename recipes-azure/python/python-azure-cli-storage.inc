DESCRIPTION = "Microsoft Azure Command-Line Tools Storage Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-storage \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-cli-core \
"

SRC_DIR = "src/command_modules/azure-cli-storage"
