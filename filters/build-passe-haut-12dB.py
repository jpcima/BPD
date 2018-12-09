import sys; sys.path.append(".")
import os ; os.chdir("../")
from analog import *

schema = "gschem-schematics/passe-haut-12dB.sch"
path = "tmp"
module_id = "HP40-12"
mod = os.path.join(path, module_id+".so")


# create plugin
c1 = Circuit()
c1.plugindef = dk_simulator.PluginDef(module_id)
c1.plugindef.name = "HP40-12"
c1.plugindef.id = "hp40-12"
c1.set_module_id(module_id)
c1.read_gschem(schema)
c1.create_faust_module()
