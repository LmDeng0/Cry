
// 关键1：与插件匹配的 Scala 版本（建议 2.13.14）
ThisBuild / scalaVersion := "2.13.14"

// 仅使用中央仓库，避免历史 Sonatype 端点引发解析问题
ThisBuild / resolvers := Seq(Resolver.mavenCentral)

// 一些常用编译选项（可选）
scalacOptions ++= Seq("-deprecation", "-unchecked", "-feature")

// 测试默认串行，避免老 Verilator/环境造成的并发卡顿（可按需移除）
Test / parallelExecution := false

lazy val root = (project in file("."))
  .settings(
    name := "crypto-chisel-llm",

    // 统一到 Chisel 3.6.1 + chiseltest 0.6.0
    libraryDependencies ++= Seq(
      "edu.berkeley.cs" %% "chisel3"      % "3.6.1",
      "edu.berkeley.cs" %% "chiseltest"   % "0.6.0" % Test,
      "org.scalatest"   %% "scalatest"    % "3.2.18" % Test,
      "com.typesafe.play" %% "play-json"  % "2.10.0-RC7" % Test
    ),

    // 关键2：插件用 full cross（追加 _2.13.14 而非 _2.13）
    addCompilerPlugin(
      ("edu.berkeley.cs" % "chisel3-plugin" % "3.6.1").cross(CrossVersion.full)
    )

    // 如需强制锁定传递依赖版本，可启用下方（通常不必）
    // , dependencyOverrides ++= Seq(
    //   "edu.berkeley.cs" %% "chisel3" % "3.6.1"
    // )
  )

// 便于在 sbt run 时单独 fork 进程
Compile / run / fork := true
