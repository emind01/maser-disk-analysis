import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt(
	"data/keplerian.csv",
	delimiter=",",
	skiprows=1
)

radius = data[:,0]
velocity = data[:,1]

plt.plot(radius, velocity, label="Keplerian rotation")

plt.xlabel("Radius (pc)")
plt.ylabel("Velocity (km/s)")
plt.title("Keplerian Rotation Curve")

plt.legend()
plt.grid(True)
plt.savefig("figures/keplerian.png", dpi=300, bbox_inches="tight")
plt.show()

