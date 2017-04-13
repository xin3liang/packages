1. [Setup prerequisite Environment](#1)
2. [Setup Deployment Machine](#2)
3. [Setup Target Machines](#3)
4. [Deploy OpenStack](#4)
****

## <a name="1">1. Setup prerequisite Environment</a>
***
* Setup the network of target machines
TO BE ADD

* Install Estuary latest release Debian or CentOS on target machines

* Bind the IP addresses of target machines

You can bind the IP address through the dhcp router Or dhcp machine(which install a dhcp service).

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


* Generate ssh key on deployment machine
```
$ ssh-keygen
```
* Setup hosts file on deployment machine (optinal)
```
$ mkdir openstack-deploy
$ cd openstack-deploy
$ wget https://raw.githubusercontent.com/open-estuary/packages/master/openstack/secrets/deployment-machine-hosts
$ sudo cat deployment-machine-hosts >> /etc/hosts
```
**_Note1_**: This step is optinal if you have an dns service for the target machines

**_Note2_**: Please modifiy the deployment-machine-hosts file according to ip and host name of target machine.

## <a name="3">3. Setup Target Machines</a>
***




## <a name="4">4. Deploy OpenStack</a>
***
