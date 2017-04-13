1. [Setup prerequisite Environment](#1)
2. [Setup Deployment Machine](#2)
3. [Setup Target Machines](#3)
4. [Deploy OpenStack](#4)


## <a name="1">1. Setup prerequisite Environment</a>
***
* Setup the network of target machines

TO BE ADD

* Install Estuary latest release Debian or CentOS on target machines

* Bind the IP addresses of target machines

Bind the IP address through the dhcp router Or dhcp machine(which install a dhcp service, e.g. dnsmasq).

* Setup dns service (recommend, not must)

Setup dns of each target machine through the router Or dns machine(which install a dns service, e.g. dnsmasq).
For dnsmasq, please refer to official [manual](http://www.thekelleys.org.uk/dnsmasq/docs/dnsmasq-man.html).

## <a name="2">2. Setup Deployment Machine</a>
***
* Install latest ansible(Required version 2.2+) On deployment machine

e.g. ubuntu: 
```
$ sudo apt-get install software-properties-common
$ sudo apt-add-repository ppa:ansible/ansible
$ sudo apt-get update
$ sudo apt-get install ansible
```
Please refer to offical [Install latest ansible](http://docs.ansible.com/ansible/intro_installation.html#installing-the-control-machine) for other distros ansible installation.


* Generate ssh key, setup hosts file(optinal), copy public key to target machine.
```
$ mkdir openstack-deploy
$ cd openstack-deploy
$ wget https://raw.githubusercontent.com/open-estuary/packages/**RELEASE-TAG**/openstack/config/target_machine_hosts
$ wget https://raw.githubusercontent.com/open-estuary/packages/**RELEASE-TAG**/openstack/sh/setup_deployment_machine.sh
$ chmod +x setup_deployment_machine.sh
$ ./setup_deployment_machine.sh target_machine_hosts
```
**_Note1_**: Setup hosts file is optinal if you have an dns service for the target machines

**_Note2_**: Please modifiy the target_machine_hosts file according to ip and host name of target machine.

## <a name="3">3. Setup Target Machines</a>
***
* Configure hostname, add and update repo
```
$ cd openstack-deploy
$ wget https://raw.githubusercontent.com/open-estuary/packages/**RELEASE-TAG**/openstack/sh/setup_target_machines.sh
$ chmod +x setup_target_machines.sh
$ ./setup_target_machines.sh target_machine_hosts
```

## <a name="4">4. Deploy OpenStack</a>
***

* Deploy ceph
```
$ cd openstack-deploy
$ git clone -b master --depth=1 https://git.linaro.org/leg/sdi/openstack-ref-architecture.git
$ git clone -b **RELEASE-TAG** --depth=1 https://github.com/open-estuary/packages.git
```

