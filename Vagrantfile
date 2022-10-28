$script = <<SCRIPT
    apt update
    apt install -y tree tmux gcc g++ make cmake

    pushd /tmp
    wget -qO- https://github.com/ikalnytskyi/termcolor/archive/refs/tags/v2.1.0.tar.gz | tar xz
    mkdir termcolor_build
    pushd termcolor_build
    cmake ../termcolor-2.1.0 && make
    make install
    popd
    popd
    rm -rf /tmp/termcolor-2.1.0 /tmp/termcolor_build

SCRIPT

Vagrant.configure("2") do |config|
    config.vm.box = "geerlingguy/ubuntu1804"
    config.ssh.shell = "bash"
    config.vm.define "devenv" do |devenv|
        devenv.vm.provision "shell", inline: $script
    end
end