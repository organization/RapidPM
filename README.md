![RapidPM Logo](https://cdn.jsdelivr.net/gh/organization/RapidPM@master/RapidPM.png)

# _RapidPM_ [![Build Status](https://travis-ci.org/organization/RapidPM.svg?branch=master)](https://travis-ci.org/organization/RapidPM)

_**High-performance PHP extension**_ that implements parts of **[PocketMine-MP](https://github.com/pmmp/PocketMine-MP)** with **[Zephir](https://www.zephir-lang.com)**.

## Why should we use [RapidPM](https://github.com/organization/RapidPM)?

The most used server software for _"Minecraft: Bedrock Edition"_ is **[PocketMine-MP](https://github.com/pmmp/PocketMine-MP)**, which is written in **[PHP](https://github.com/php/php-src)**.

_PocketMine-MP_ requires massive resource because of the nature of the game server, but PHP causes the slow-down issues for this.

The **only way** to fix this issue is to eradicating the rotten root: **escaping from PHP** and **rewriting the code into another language**.

_**RapidPM**_ will do this for you.

## Why [Zephir](https://www.zephir-lang.com)?

Zend API of **[PHP](https://github.com/php/php-src)** is **very difficult to handle** and C is **memory-unsafe**.

Our solution to fix this issue is writing the code with **[Zephir](https://www.zephir-lang.com)**, an **[intuitive](https://docs.zephir-lang.com/0.12/en/introduction)** and **[memory safety](https://docs.zephir-lang.com/0.12/en/motivation#if-you-are-a-c-programmer)** ensured language.

## License

This project is licensed under **GPL-3.0**. See the [LICENSE](https://github.com/organization/RapidPM/blob/master/LICENSE) file for more information.
