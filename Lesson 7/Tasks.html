<div class="ttypography"><div class="problem-statement"><div class="header"><div class="title">A. Ревакцинация</div><div class="time-limit"><div class="property-title">ограничение по времени на тест</div>1 s.</div><div class="memory-limit"><div class="property-title">ограничение по памяти на тест</div>512 MB</div><div class="input-file"><div class="property-title">ввод</div>standard input</div><div class="output-file"><div class="property-title">вывод</div>standard output</div></div><div><p>Врачи создали аж целых $$$m$$$ вакцин от коронавируса! Теперь перед Володей стоит сложная задача: решить, какими вакцинами уколоться. Он решил, что поставит себе $$$n$$$ доз вакцин, нужно только понять, какие именно лучше ставить. Известно, что первый укол $$$i$$$-той вакцины повышает иммунитет на $$$a_i$$$, а каждый последующий укол этой же вакциной — на $$$b_i$$$. Помогите Володе определить, какого максимального уровня иммунитета можно достичь?</p></div><div class="input-specification"><div class="section-title">Входные данные</div><p>В первой строке задано одно целое число $$$t$$$ ($$$1 \leq t \leq 10\,000$$$) — количество наборов входных данных. Затем следует описание $$$t$$$ наборов входных данных, каждый из которых задан следующим образом.</p><p>В первой строке набора записаны два целых числа $$$n$$$ и $$$m$$$ ($$$1 \le n \le 10^9$$$, $$$1 \le m \le 100\,000$$$) — требуемое количество уколов и количество доступных видов вакцин.</p><p>Каждая из следующих $$$m$$$ строк описывает очередную вакцину и содержит два целых числа $$$a_i$$$ и $$$b_i$$$ ($$$0 \le a_i, b_i \le 10^9$$$) — увеличение уровня иммунитета от первого укола $$$i$$$-той вакциной и увеличение уровня иммунитета от каждого последующего укола этим типом вакцины.</p><p>Наборы разделены одной пустой строкой.</p><p>Гарантируется, что сумма $$$m$$$ по всем наборам входных данных не превосходит $$$100\,000$$$.</p></div><div class="output-specification"><div class="section-title">Выходные данные</div><p>Для каждого набора входных данных в единственной строке выведите одно число — максимальный уровень иммунитета, который может получить Володя от $$$n$$$ уколов.</p></div><div class="sample-tests"><div class="section-title">Пример</div><div class="sample-test"><div class="input"><div class="title">Входные данные</div><pre>
2
4 3
5 0
1 4
2 2

5 3
5 2
4 2
3 1
</pre></div><div class="output"><div class="title">Выходные данные</div><pre>
14
16
</pre></div></div></div><div class="note"><div class="section-title">Примечание</div><p>В первом примере если поставить 1 укол первой вакциной и 3 укола вторым типом вакцины, то итоговое значение уровня иммунитета будет равно $$$5 + (1 + 2 \cdot 4) = 14$$$.</p></div></div></div>
</div>



<script type="text/javascript">
    $(document).ready(function () {
        window.changedTests = new Set();

        function endsWith(string, suffix) {
            return string.indexOf(suffix, string.length - suffix.length) !== -1;
        }

        const inputFileDiv = $("div.input-file");
        const inputFile = inputFileDiv.text();
        const outputFileDiv = $("div.output-file");
        const outputFile = outputFileDiv.text();


        if (!endsWith(inputFile, "стандартный ввод")
            && !endsWith(inputFile, "standard input")) {
            inputFileDiv.attr("style", "font-weight: bold");
        }

        if (!endsWith(outputFile, "стандартный вывод")
            && !endsWith(outputFile, "standard output")) {
            outputFileDiv.attr("style", "font-weight: bold");
        }

        const titleDiv = $("div.header div.title");



        String.prototype.replaceAll = function (search, replace) {
            return this.split(search).join(replace);
        };

        $(".sample-test .title").each(function () {
            const preId = ("id" + Math.random()).replaceAll(".", "0");
            const cpyId = ("id" + Math.random()).replaceAll(".", "0");

            $(this).parent().find("pre").attr("id", preId);
            const $copy = $("<div title='Скопировать' data-clipboard-target='#" + preId + "' id='" + cpyId + "' class='input-output-copier'>Скопировать</div>");
            $(this).append($copy);

            const clipboard = new Clipboard('#' + cpyId, {
                text: function (trigger) {
                    const pre = document.querySelector('#' + preId);
                    const lines = pre.querySelectorAll(".test-example-line");
                    return Codeforces.filterClipboardText(pre.innerText, lines.length);
                }
            });

            const isInput = $(this).parent().hasClass("input");

            clipboard.on('success', function (e) {
                if (isInput) {
                    Codeforces.showMessage("Входные данные были скопированы в буфер обмена");
                } else {
                    Codeforces.showMessage("Выходные данные были скопированы в буфер обмена");
                }
                e.clearSelection();
            });
        });

        $(".test-form-item input").change(function () {
            addPendingSubmissionMessage($($(this).closest("form")), "Вы изменили ответ, не забудьте его отправить, если вы хотите сохранить изменения");
            const index = $(this).closest(".problemindexholder").attr("problemindex");
            let test = "";
            $(this).closest("form input").each(function () {
                const test_ = $(this).attr("name");
                if (test_ && test_.substring(0, 4) === "test") {
                    test = test_;
                }
            });
            if (index.length > 0 && test.length > 0) {
                const indexTest = index + "::" + test;
                window.changedTests.add(indexTest);
            }
        });

        $(window).on('beforeunload', function () {
            if (window.changedTests.size > 0) {
                return 'Dialog text here';
            }
        });

        autosize($('.test-explanation textarea'));

        $(".test-example-line").hover(function() {
            $(this).attr("class").split(" ").forEach((clazz) => {
                if (clazz.substr(0, "test-example-line-".length) === "test-example-line-") {
                    let end = clazz.substr("test-example-line-".length);
                    if (end !== "even" && end !== "odd" && end !== "0") {
                        let top = 1E20;
                        let left = 1E20;
                        let problem = $(this).closest(".problemindexholder");
                        $(this).closest(".input").find("." + clazz).css("background-color", "#FFFDE7").each(function() {
                            top = Math.min(top, $(this).offset().top);
                            left = Math.min(left, $(this).offset().left);
                        });
                        let testCaseMarker = problem.find(".testCaseMarker_" + end);
                        if (testCaseMarker.length === 0) {
                            const html = "<div class=\"testCaseMarker testCaseMarker_" + end + " notice\"></div>";
                            problem.append($(html));
                            testCaseMarker = problem.find(".testCaseMarker_" + end);
                        }
                        if (testCaseMarker) {
                            testCaseMarker.show()
                                    .offset({top, left: left - 20})
                                    .text(end);
                        }
                    }
                }
            });
        }, function() {
            $(this).attr("class").split(" ").forEach((clazz) => {
                if (clazz.substr(0, "test-example-line-".length) === "test-example-line-") {
                    let end = clazz.substr("test-example-line-".length);
                    if (end !== "even" && end !== "odd" && end !== "0") {
                        $("." + clazz).css("background-color", "");
                        $(this).closest(".problemindexholder").find(".testCaseMarker_" + end).hide();
                    }
                }
            });
        });

    });
</script>        </div>
        <div
                    style="margin-bottom: 2em;"
        >
<div class="problemindexholder" problemindex="B" data-uuid="ps_b7fb6c11795eb5db2b71080e2c69bd9821cd1965">
    <div style="display: none; margin:1em 0;text-align: center; position: relative;" class="alert alert-info diff-notifier">
        <div>Условие задачи было недавно изменено. <a class="view-changes" href="#">Просмотреть изменения.</a></div>
        <span class="diff-notifier-close" style="position: absolute; top: 0.2em; right: 0.3em; cursor: pointer; font-size: 1.4em;">&times;</span>
    </div>
        <div class="ttypography"><div class="problem-statement"><div class="header"><div class="title">B. Теорема существования и единственности</div><div class="time-limit"><div class="property-title">ограничение по времени на тест</div>2 s.</div><div class="memory-limit"><div class="property-title">ограничение по памяти на тест</div>256 MB</div><div class="input-file"><div class="property-title">ввод</div>standard input</div><div class="output-file"><div class="property-title">вывод</div>standard output</div></div><div><p>Приближается защита диплома, а Костя так и не начал его готовить. Понимая, что времени в обрез, он решил попытаться написать хоть что-то. В качестве задачи он решил рассмотреть задачу о существовании и единственности... замощения доски доминошками $$$1 \times 2$$$!</p><p>Итак, он написал вступление:</p><p>Рассмотрим обобщение классической теоремы существования и единственности на случай прямоугольной доски $$$n \times m$$$ с запрещенным множеством. Такого рода задачи активно исследовались в работах [1-50], было получено множество частных результатов в данных направлениях. В настоящей работе мы предложим алгоритм, позволяющий проверить существование и единственность решения задачи о замощении такой доски связными двухточечными множествами.</p><p>К сожалению, на этом писательский талант Кости закончился, и код алгоритма он написать не смог. Помогите ему.</p></div><div class="input-specification"><div class="section-title">Входные данные</div><p>В первой строке следуют два целых числа $$$n$$$ и $$$m$$$ ($$$1 \leq n,m \leq 2000$$$).</p><p>В следующих $$$n$$$ строках описывается поле. Символ '<span class="tex-font-style-tt">.</span>' обозначает пустую ячейку, а символ '<span class="tex-font-style-tt">*</span>' обозначает занятую ячейку.</p></div><div class="output-specification"><div class="section-title">Выходные данные</div><p>Если замощения доминошками не существует, или же оно не уникальное, выведите строку &quot;<span class="tex-font-style-tt">Not unique</span>&quot;.</p><p>В противном случае требуется вывести вариант покрытия всех пустых ячеек доминошками размера $$$1 \times 2$$$. Обозначайте горизонтальные доминошки символами &quot;<span class="tex-font-style-tt">&lt;&gt;</span>&quot;, а вертикальные доминошки — символами &quot;^v&quot;. Для полного понимания формата вывода обратитесь к примерам вывода.</p></div><div class="sample-tests"><div class="section-title">Примеры</div><div class="sample-test"><div class="input"><div class="title">Входные данные</div><pre>3 3<br />...<br />.*.<br />...<br /></pre></div><div class="output"><div class="title">Выходные данные</div><pre>Not unique<br /></pre></div><div class="input"><div class="title">Входные данные</div><pre>4 4<br />..**<br />*...<br />*.**<br />....<br /></pre></div><div class="output"><div class="title">Выходные данные</div><pre>&lt;&gt;**<br />*^&lt;&gt;<br />*v**<br />&lt;&gt;&lt;&gt;<br /></pre></div><div class="input"><div class="title">Входные данные</div><pre>2 4<br />*..*<br />....<br /></pre></div><div class="output"><div class="title">Выходные данные</div><pre>*&lt;&gt;*<br />&lt;&gt;&lt;&gt;<br /></pre></div><div class="input"><div class="title">Входные данные</div><pre>1 1<br />.<br /></pre></div><div class="output"><div class="title">Выходные данные</div><pre>Not unique<br /></pre></div><div class="input"><div class="title">Входные данные</div><pre>1 1<br />*<br /></pre></div><div class="output"><div class="title">Выходные данные</div><pre>*<br /></pre></div></div></div><div class="note"><div class="section-title">Примечание</div><p>В первом примере действительно существует два решения исходной задачи:</p><pre class="verbatim"><br />&lt;&gt;^<br />^*v<br />v&lt;&gt;<br /></pre><p>и</p><pre class="verbatim"><br />^&lt;&gt;<br />v*^<br />&lt;&gt;v<br /></pre><p>Таким образом, ответ — &quot;<span class="tex-font-style-tt">Not unique</span>&quot;.</p></div></div></div>
</div>



<script type="text/javascript">
    $(document).ready(function () {

        function endsWith(string, suffix) {
            return string.indexOf(suffix, string.length - suffix.length) !== -1;
        }

        const inputFileDiv = $("div.input-file");
        const inputFile = inputFileDiv.text();
        const outputFileDiv = $("div.output-file");
        const outputFile = outputFileDiv.text();


        if (!endsWith(inputFile, "стандартный ввод")
            && !endsWith(inputFile, "standard input")) {
            inputFileDiv.attr("style", "font-weight: bold");
        }

        if (!endsWith(outputFile, "стандартный вывод")
            && !endsWith(outputFile, "standard output")) {
            outputFileDiv.attr("style", "font-weight: bold");
        }

        const titleDiv = $("div.header div.title");




    });
</script>        </div>
        <div
                    style="margin-bottom: 2em;"
        >
<div class="problemindexholder" problemindex="C" data-uuid="ps_bcbaf2b96951c83b3d5abbd8e911b4d1ddb95461">
    <div style="display: none; margin:1em 0;text-align: center; position: relative;" class="alert alert-info diff-notifier">
        <div>Условие задачи было недавно изменено. <a class="view-changes" href="#">Просмотреть изменения.</a></div>
        <span class="diff-notifier-close" style="position: absolute; top: 0.2em; right: 0.3em; cursor: pointer; font-size: 1.4em;">&times;</span>
    </div>
        <div class="ttypography"><div class="problem-statement"><div class="header"><div class="title">C. Subtraction sort</div><div class="time-limit"><div class="property-title">time limit per test</div>2 s.</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 MB</div><div class="input-file"><div class="property-title">input</div>standard input</div><div class="output-file"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer array $$$a$$$ of size $$$n$$$.</p><p>You can perform operations on the array $$$a$$$. In each operation, you may choose three indices $$$x,y,z: 1 \le x &lt; y &lt; z \le n$$$ and set $$$a_x = a_y - a_z$$$. After any operation you should hold $$$\forall i: 1 \le i \le n: |a_i| &lt; 10^{18}$$$.</p><p>Determine if you can turn array $$$a$$$ to sorted in non-decreasing order, using no more than $$$n$$$ operations.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integer $$$t$$$ $$$(1 \leq t \leq 10^4)$$$– number of test cases.</p><p>The first line of each test case contains integer $$$n$$$ $$$(3 \leq n \leq 2 \cdot 10^5)$$$ – size of array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_i$$$ $$$(-10^9 \leq a_i \leq 10^9)$$$ – array $$$a$$$ itself.</p><p>It is guaranteed that sum of $$$n$$$ across all test cases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print $$$-1$$$ if there is no solution.</p><p>If solution exists, print number of operations needed $$$m$$$ $$$(0 \leq m \leq n)$$$. On $$$i$$$-th of the next $$$m$$$ lines print $$$x_i y_i z_i$$$ – indices of $$$i$$$-th operation.</p><p>If there are multiple solutions, you can output any. Note that you don't have to minimize the number of operations.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input</div><pre>
3
5
5 -4 2 -1 2
3
4 3 2
3
-3 -2 -1
</pre></div><div class="output"><div class="title">Output</div><pre>
2
1 2 3
3 4 5
-1
0
</pre></div></div></div></div></div>
</div>



<script type="text/javascript">
    $(document).ready(function () {

        function endsWith(string, suffix) {
            return string.indexOf(suffix, string.length - suffix.length) !== -1;
        }

        const inputFileDiv = $("div.input-file");
        const inputFile = inputFileDiv.text();
        const outputFileDiv = $("div.output-file");
        const outputFile = outputFileDiv.text();


        if (!endsWith(inputFile, "стандартный ввод")
            && !endsWith(inputFile, "standard input")) {
            inputFileDiv.attr("style", "font-weight: bold");
        }

        if (!endsWith(outputFile, "стандартный вывод")
            && !endsWith(outputFile, "standard output")) {
            outputFileDiv.attr("style", "font-weight: bold");
        }

        const titleDiv = $("div.header div.title");




    });
</script>        </div>
        <div
                    style="margin-bottom: 2em;"
        >
<div class="problemindexholder" problemindex="D" data-uuid="ps_c94a1ded77f98c1e4e86a0399f1ac08d8ad01465">
    <div style="display: none; margin:1em 0;text-align: center; position: relative;" class="alert alert-info diff-notifier">
        <div>Условие задачи было недавно изменено. <a class="view-changes" href="#">Просмотреть изменения.</a></div>
        <span class="diff-notifier-close" style="position: absolute; top: 0.2em; right: 0.3em; cursor: pointer; font-size: 1.4em;">&times;</span>
    </div>
        <div class="ttypography"><div class="problem-statement"><div class="header"><div class="title">D. ППСП</div><div class="time-limit"><div class="property-title">ограничение по времени на тест</div>1 s.</div><div class="memory-limit"><div class="property-title">ограничение по памяти на тест</div>256 MB</div><div class="input-file"><div class="property-title">ввод</div>standard input</div><div class="output-file"><div class="property-title">вывод</div>standard output</div></div><div><p>Назовем последовательность из символов «<span class="tex-font-style-tt">(</span>» и «<span class="tex-font-style-tt">)</span>» правильной скобочной последовательностью (ПСП), если в нее можно вставить символы «<span class="tex-font-style-tt">1</span>» и «<span class="tex-font-style-tt">+</span>» и получить корректное математическое выражение. Например, скобочные последовательности «<span class="tex-font-style-tt">()()</span>», «<span class="tex-font-style-tt">(())</span>» — правильные (полученные выражения: «<span class="tex-font-style-tt">(1+1)+(1+1)</span>», «<span class="tex-font-style-tt">((1+1)+1)</span>»), а «<span class="tex-font-style-tt">)(</span>» и «<span class="tex-font-style-tt">)</span>» — нет. Пустая строка является правильной скобочной последовательностью по определению.</p><p>Назовем ПСП простой (ППСП), если ее нельзя разбить в непересекающееся объединение ПСП.</p><p>Вам дана строка, состоящая из символов «<span class="tex-font-style-tt">(</span>», «<span class="tex-font-style-tt">)</span>» и «<span class="tex-font-style-tt">?</span>». Замените знаки вопроса на скобки таким образом, чтобы получить ППСП, или скажите, что так сделать нельзя. Если существует несколько решений, вы можете найти любое.</p></div><div class="input-specification"><div class="section-title">Входные данные</div><p>В первой строке записано одно целое число $$$|s|$$$ ($$$1\leq |s|\leq 3 \cdot 10^5$$$) — длина строки.</p><p>Вторая строка содержит строку $$$s$$$, которая содержит только символы «<span class="tex-font-style-tt">(</span>», «<span class="tex-font-style-tt">)</span>», «<span class="tex-font-style-tt">?</span>».</p></div><div class="output-specification"><div class="section-title">Выходные данные</div><p>Выведите одну строку, содержащую ответ на задачу.</p><p>Если возможных решений несколько, вы можете вывести любое.</p><p>Если решения не существует, выведите единственную строку, содержащую «<span class="tex-font-style-tt">:(</span>» (без кавычек).</p></div><div class="sample-tests"><div class="section-title">Примеры</div><div class="sample-test"><div class="input"><div class="title">Входные данные</div><pre>
6
(?????
</pre></div><div class="output"><div class="title">Выходные данные</div><pre>
(()())</pre></div><div class="input"><div class="title">Входные данные</div><pre>
10
(???(???(?
</pre></div><div class="output"><div class="title">Выходные данные</div><pre>
:(
</pre></div></div></div><div class="note"><div class="section-title">Примечание</div><p>Можно доказать, что не существует ответа на второй тест из примера, поэтому требуется вывести «<span class="tex-font-style-tt">:(</span>».</p></div></div></div>
</div>



<script type="text/javascript">
    $(document).ready(function () {

        function endsWith(string, suffix) {
            return string.indexOf(suffix, string.length - suffix.length) !== -1;
        }

        const inputFileDiv = $("div.input-file");
        const inputFile = inputFileDiv.text();
        const outputFileDiv = $("div.output-file");
        const outputFile = outputFileDiv.text();


        if (!endsWith(inputFile, "стандартный ввод")
            && !endsWith(inputFile, "standard input")) {
            inputFileDiv.attr("style", "font-weight: bold");
        }

        if (!endsWith(outputFile, "стандартный вывод")
            && !endsWith(outputFile, "standard output")) {
            outputFileDiv.attr("style", "font-weight: bold");
        }

        const titleDiv = $("div.header div.title");




    });
</script>        </div>
        <div
                    style="margin-bottom: 2em;"
        >
<div class="problemindexholder" problemindex="E" data-uuid="ps_351d52b812c3f6c6014c7e2009e7379ce5fe9367">
    <div style="display: none; margin:1em 0;text-align: center; position: relative;" class="alert alert-info diff-notifier">
        <div>Условие задачи было недавно изменено. <a class="view-changes" href="#">Просмотреть изменения.</a></div>
        <span class="diff-notifier-close" style="position: absolute; top: 0.2em; right: 0.3em; cursor: pointer; font-size: 1.4em;">&times;</span>
    </div>
        <div class="ttypography"><div class="problem-statement"><div class="header"><div class="title">E. Грузная жизнь</div><div class="time-limit"><div class="property-title">ограничение по времени на тест</div>2 s.</div><div class="memory-limit"><div class="property-title">ограничение по памяти на тест</div>256 MB</div><div class="input-file"><div class="property-title">ввод</div>standard input</div><div class="output-file"><div class="property-title">вывод</div>standard output</div></div><div><p>Грузчик Вася стоит на бесконечной прямой в точке 0. За один шаг он может переместиться на 1 влево или вправо. Также на прямой находятся $$$n$$$ одинаковых коробок с грузами и $$$m$$$ домов с покупателями, которые заказали себе на дом эти коробки. </p><p>Все бы ничего, но грузы слишком большие и тяжелые, чтобы их поднять, а Вася слишком одномерный, чтобы их обойти, поэтому единственное, что он может — толкать эти грузы. Более формально, когда Вася двигается вправо, то, если в его новой позиции стоит коробка, то она сдвигается на 1 вправо. При этом, если на новой позиции коробки стоит еще одна коробка, то и она сдвинется направо, и так далее.</p><p>Задача Васи — доставить как можно больше грузов до домов покупателей (покупатели заберут коробки в конце, после того, как Вася закончит свою работу). </p></div><div class="input-specification"><div class="section-title">Входные данные</div><p>В первой строке записано одно целое число $$$t$$$ ($$$1 \le t \le 1000$$$) — количество наборов входных данных.</p><p>Затем следует описание $$$t$$$ наборов входных данных.</p><p>В первой строке каждого набора входных данных записаны два целых числа $$$n$$$ и $$$m$$$ ($$$1 \le n, m \le 2 \cdot 10^5$$$) — количество коробок и количество домов покупателей, соответственно.</p><p>Во второй строке каждого набора входных данных записаны $$$n$$$ различных целых чисел в возрастающем порядке $$$a_1, a_2, \dots, a_n$$$ ($$$-10^9 \le a_1 &lt; a_2 &lt; \dots &lt; a_n \le 10^9$$$; $$$a_i \neq 0$$$) — начальные позиции коробок.</p><p>В третьей строке каждого набора входных данных записаны $$$m$$$ различных целых чисел в возрастающем порядке $$$b_1, b_2, \dots, b_m$$$ ($$$-10^9 \le b_1 &lt; b_2 &lt; \dots &lt; b_m \le 10^9$$$; $$$b_i \neq 0$$$) — дома покупателей.</p><p>Сумма $$$n$$$ по всем наборам входных данных не превосходит $$$2 \cdot 10^5$$$. Сумма $$$m$$$ по всем наборам входных данных не превосходит $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Выходные данные</div><p>На каждый набор входных данных выведите одно целое число — максимальное количество коробок, которые можно оставить у домов покупателей.</p></div><div class="sample-tests"><div class="section-title">Пример</div><div class="sample-test"><div class="input"><div class="title">Входные данные</div><pre>
5
5 6
-1 1 5 11 15
-4 -3 -2 6 7 15
2 2
-1 1
-1000000000 1000000000
2 2
-1000000000 1000000000
-1 1
3 5
-1 1 2
-2 -1 1 2 5
2 1
1 2
10
</pre></div><div class="output"><div class="title">Выходные данные</div><pre>
4
2
0
3
1
</pre></div></div></div><div class="note"><div class="section-title">Примечание</div><p>В первом наборе входных данных можно пойти на $$$5$$$ направо: коробка на позиции $$$1$$$ окажется на позиции $$$6$$$, а коробка на позиции $$$5$$$ — на позиции $$$7$$$. Затем можно пойти на $$$6$$$ налево и встать в позицию $$$-1$$$, сдвинув коробку в $$$-2$$$. В конце коробки стоят на позициях $$$[-2, 6, 7, 11, 15]$$$, соответственно. Среди них позиции $$$[-2, 6, 7, 15]$$$ — дома покупателей, поэтому ответ равен $$$4$$$.</p><p>Во втором наборе входных данных можно дотолкать коробку из $$$-1$$$ в $$$-10^9$$$, а затем коробку из $$$1$$$ в $$$10^9$$$, и получить ответ $$$2$$$.</p><p>Третий набор входных данных показывает, что не разрешается тащить коробки на себя, поэтому нельзя их притащить к домам покупателей.</p><p>В четвертом наборе входных данных все коробки уже находятся у домов покупателей, поэтому можно ничего не делать и все равно получить ответ $$$3$$$.</p><p>В пятом наборе входных данных домов покупателей меньше, чем коробок. Можно пойти на $$$8$$$ или на $$$9$$$ направо, чтобы какая-нибудь коробка встала в $$$10$$$.</p></div></div></div>
</div>



<script type="text/javascript">
    $(document).ready(function () {

        function endsWith(string, suffix) {
            return string.indexOf(suffix, string.length - suffix.length) !== -1;
        }

        const inputFileDiv = $("div.input-file");
        const inputFile = inputFileDiv.text();
        const outputFileDiv = $("div.output-file");
        const outputFile = outputFileDiv.text();


        if (!endsWith(inputFile, "стандартный ввод")
            && !endsWith(inputFile, "standard input")) {
            inputFileDiv.attr("style", "font-weight: bold");
        }

        if (!endsWith(outputFile, "стандартный вывод")
            && !endsWith(outputFile, "standard output")) {
            outputFileDiv.attr("style", "font-weight: bold");
        }

        const titleDiv = $("div.header div.title");




    });
</script>        </div>
        <div
                    style="margin-bottom: 1em;"
        >
<div class="problemindexholder" problemindex="F" data-uuid="ps_774db5301066932d24937e40e7a16f077443f92e">
    <div style="display: none; margin:1em 0;text-align: center; position: relative;" class="alert alert-info diff-notifier">
        <div>Условие задачи было недавно изменено. <a class="view-changes" href="#">Просмотреть изменения.</a></div>
        <span class="diff-notifier-close" style="position: absolute; top: 0.2em; right: 0.3em; cursor: pointer; font-size: 1.4em;">&times;</span>
    </div>
        <div class="ttypography"><div class="problem-statement"><div class="header"><div class="title">F. Пары равных</div><div class="time-limit"><div class="property-title">ограничение по времени на тест</div>2 s.</div><div class="memory-limit"><div class="property-title">ограничение по памяти на тест</div>256 MB</div><div class="input-file"><div class="property-title">ввод</div>standard input</div><div class="output-file"><div class="property-title">вывод</div>standard output</div></div><div><p>Дано 2 строки, $$$s$$$ и $$$t$$$? размера $$$n$$$ каждая. Каждая из них состоит из строчных букв латинского алфавита и знаков вопроса. Вам нужно выбрать множество пар индексов, $$$\{(i_1, j_1), \dotsc, (i_k, j_k)\}$$$, таким образом, что: </p><ol> <li> Все $$$i$$$ различны. </li><li> Все $$$j$$$ различны. </li><li> Для любой пары индексов $$$(i, j)$$$ из множества верно, что либо $$$s[i] = t[j]$$$, либо один из этих символов равен знаку вопроса. </li><li> $$$k$$$ максимально. </li></ol><p>Выведите максимальное количество пар и сами пары. </p></div><div class="input-specification"><div class="section-title">Входные данные</div><p>В первой строке записано целое число $$$n$$$ ($$$1 \le n \le 150000$$$) — длина строк</p><p>Вторая строка содержит $$$s$$$, её длина равна $$$n$$$. Она содержит лишь строчные буквы латинского алфавита или знаки вопроса.</p><p>Третья строка содержит $$$t$$$, её длина равна $$$n$$$. Она содержит лишь строчные буквы латинского алфавита или знаки вопроса.</p></div><div class="output-specification"><div class="section-title">Выходные данные</div><p>Выведите $$$k$$$ — максимальное количество пар. </p><p>Следующие $$$k$$$ строк должны содержать пары целых чисел $$$a_j, b_j$$$ ($$$1 \le a_j, b_j \le n$$$), где $$$j$$$-я из этих строк содержит индекс первого числа в $$$j$$$-й паре (число $$$a_j$$$) и индекс второго числа в $$$j$$$-й паре (число $$$b_j$$$). Все значения $$$a_j$$$ должны быть различны, все значения $$$b_j$$$ должны быть различны.</p><p>Если существует несколько ответов, выведите любой из них.</p></div><div class="sample-tests"><div class="section-title">Примеры</div><div class="sample-test"><div class="input"><div class="title">Входные данные</div><pre>
10
codeforces
dodivthree
</pre></div><div class="output"><div class="title">Выходные данные</div><pre>
5
7 8
4 9
2 2
9 10
3 1
</pre></div><div class="input"><div class="title">Входные данные</div><pre>
7
abaca?b
zabbbcc
</pre></div><div class="output"><div class="title">Выходные данные</div><pre>
5
6 5
2 3
4 6
7 4
1 2
</pre></div><div class="input"><div class="title">Входные данные</div><pre>
9
bambarbia
hellocode
</pre></div><div class="output"><div class="title">Выходные данные</div><pre>
0
</pre></div><div class="input"><div class="title">Входные данные</div><pre>
10
code??????
??????test
</pre></div><div class="output"><div class="title">Выходные данные</div><pre>
10
6 2
1 6
7 3
3 5
4 8
9 7
5 1
2 4
10 9
8 10
</pre></div></div></div></div></div>
</div>