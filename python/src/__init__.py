"""
    otunifsphere --- An OpenTURNS module
    ==================================

    Contents
    --------
      'otunifsphere' is a module for OpenTURNS

"""

import sys
if sys.platform.startswith('win'):
    # this ensures OT dll is loaded
    import openturns

from .otunifsphere import *

__version__ = '0.0'

